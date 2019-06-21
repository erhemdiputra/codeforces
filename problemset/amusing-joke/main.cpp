#include<bits/stdc++.h>

using namespace std;

int main() {
    string guestName, hostName, pileLetters, mergedPile;
    cin>>guestName>>hostName>>pileLetters;
    bool isMatch = true;

    mergedPile.append(guestName);
    mergedPile.append(hostName);

    if(mergedPile.length() != pileLetters.length()) {
        cout<<"NO"<<endl;
        return 0;
    }

    sort(mergedPile.begin(), mergedPile.end());
    sort(pileLetters.begin(), pileLetters.end());

    for(int i = 0; i < mergedPile.length(); i++) {
        if(mergedPile[i] != pileLetters[i]) {
            isMatch = false;
            break;
        }
    }

    if(isMatch) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

// int main() {
//     string guestName, hostName, pileLetters, mergedPile;
//     map<char, int> maps1, maps2;
//     char key;
//     bool isMatch;

//     cin>>guestName>>hostName>>pileLetters;

//     mergedPile.append(guestName);
//     mergedPile.append(hostName);

//     if(mergedPile.length() != pileLetters.length()) {
//         cout<<"NO"<<endl;
//         return 0;
//     }

//     for(int i = 0; i < mergedPile.size(); i++) {
//         maps1[mergedPile[i]]++;
//     }

//     for(int i = 0; i < pileLetters.size(); i++) {
//         maps2[pileLetters[i]]++;
//     }

//     isMatch = true;

//     map<char, int>::iterator it;
//     for(it = maps1.begin(); it != maps1.end(); it++) {
//         key = it->first;
//         if(maps1[key] != maps2[key]) {
//             isMatch = false;
//             break;
//         }
//     }

//     if(isMatch) {
//         cout<<"YES"<<endl;
//     } else {
//         cout<<"NO"<<endl;
//     }
// }