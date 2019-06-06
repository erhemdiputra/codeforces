#include<bits/stdc++.h>

using namespace std;

vector<string> split(string str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string tok;

    while(getline(ss, tok, delimiter)) {
        result.push_back(tok);
    }

    return result;
}

int main() {
    string str, result;
    vector<string> parts;
    int len;

    cin>>str;

    if (str.length() == 1) {
        cout<<str<<endl;
        return 0;
    }

    parts = split(str, '+');
    sort(parts.begin(), parts.end());
    len = parts.size();

    for(auto it = parts.begin(); it != parts.end(); it++) {
        int index = distance(parts.begin(), it);
        result.append(*it);

        if (index < len - 1) {
            result.append("+");
        }
    }

    cout<<result<<endl;
}