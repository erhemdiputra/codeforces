#include<bits/stdc++.h>

using namespace std;

bool findUniqueYear(int year) {
    int digit;
    map<int, bool> mapDigits;

    while(year > 0) {
        digit = year % 10;
        if (mapDigits[digit]) {
            break;
        }

        mapDigits[digit] = true;
        year = year/10;
    }

    if (year > 0) {
        return false;
    }

    return true;
}

int main() {
    int year;
    cin>>year;

    while(!findUniqueYear(++year)) {}

    cout<<year<<endl;
}