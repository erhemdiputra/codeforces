#include <bits/stdc++.h>

using namespace std;

vector<int> v[30005];
bool visited[30005];
int n, t;
bool found;

int dfs(int start, int step) {
    visited[start] = true;

    for(int i = 0; i < v[start].size(); i++) {
        if (v[start][i] == t) {
            found = true;
            break;
        }

        if(!visited[v[start][i]]) {
            dfs(v[start][i], step+1);
        }
    }
}

int main() {
    int val;
    cin>>n>>t;

    for(int i = 1; i < n; i++) {
        cin>>val;
        v[i].push_back(i+val);
    }

    dfs(1, 1);

    if(found) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}