#include <bits/stdc++.h>

using namespace std;

vector<int> G[30005];
bool visited[30005];
int n;

struct rec {
    int vertex;
    int step;
};

stack<rec> S;

rec make_rec(int vertex, int step) {
    rec result;
    result.vertex = vertex;
    result.step = step;
    return result;
}

int dfs(int start, int target) {
    rec v = make_rec(start, 1);
    S.push(v);
    visited[start] = true;

    while(!S.empty()) {
        v = S.top();
        S.pop();

        if(v.vertex == target) return v.step;
        else {
            for(int i = 0; i < G[v.vertex].size(); i++) {
                if(!visited[G[v.vertex][i]]) {
                    rec next = make_rec(G[v.vertex][i], v.step + 1);
                    S.push(next);
                    visited[G[v.vertex][i]] = true;
                }
            }
        }
    }

    return -1;
}

int main() {
    int target, val;
    cin>>n>>target;

    for(int i = 1; i < n; i++) {
        cin>>val;
        G[i].push_back(i+val);
    }

    int found =  dfs(1, target);

    if(found == -1) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}