#include<bits/stdc++.h>

using namespace std;

struct teamCostume {
    int home;
    int away;
};

int main() {
    int n, home, away, counter;
    teamCostume teams[50];

    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>home>>away;
        teams[i].home = home;
        teams[i].away = away;
    }

    counter = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(teams[i].home ==  teams[j].away) {
                    counter++;
                }
            }
        }
    }

    cout<<counter<<endl;
}