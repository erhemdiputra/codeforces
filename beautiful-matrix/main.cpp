#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[50][50], idxRow, idxCol, result;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin>>arr[i][j];
            if (arr[i][j] == 1) {
                idxRow = i;
                idxCol = j;
            }
        }
    }

    result = abs(idxRow - 3) + abs(idxCol - 3);
    cout<<result<<endl;
}