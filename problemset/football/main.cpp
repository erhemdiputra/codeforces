#include<bits/stdc++.h>

using namespace std;

int main() {
    int counter, len;
    bool found = false;
    string str;
    cin>>str;

    counter = 1;
    len = str.size();

    for(int i = 0; i < len - 1; i++) {
        if (str[i] == str[i+1]) {
            counter++;
            if (counter == 7) {
                found = true;
                break;
            }
        } else {
            counter = 1;
        }
    }

    if (found) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    cout<<endl;
}

// int counter, maxVal, len;
// string str;
// cin>>str;

// counter = 0;
// maxVal = INT_MIN;
// len = str.size();

// for (int i = 0; i < len - 1; i++) {
//     if (str[i] == str[i+1]) {
//         counter++;
//     } else {
//         maxVal = max(counter, maxVal);
//         counter = 0;
//     }
// }

// maxVal = max(counter, maxVal);
// maxVal += 1;

// if (maxVal >= 7) {
//     cout<<"YES"<<endl;
// } else {
//     cout<<"NO"<<endl;
// }