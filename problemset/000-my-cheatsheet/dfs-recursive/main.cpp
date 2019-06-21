#include <bits/stdc++.h>

using namespace std;

vector<int> v[30005];
bool visited[30005];
int t;
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

    t = 7;

    v[1].push_back(2);
    v[1].push_back(3);
    v[2].push_back(4);
    v[2].push_back(5);
    v[5].push_back(7);
    v[6].push_back(10);

    dfs(1, 1);

    if(found) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}