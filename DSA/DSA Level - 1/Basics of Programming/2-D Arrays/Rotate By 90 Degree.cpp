/*

n = 4

11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Output : 

41 31 21 11
42 32 22 12
43 33 23 13
44 34 24 14

Logic : First reverse the rows
        then tranform rows to column
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int ans[n][n];
    for(int i = 0; i < n ; i++) {
        int k = 0;
        for(int j = n - 1; j >= 0; j--) {
            ans[i][k] = arr[i][j];
            k++;
        }
    }
    for(int i = n - 1; i >= 0 ; i--) {
        for(int j = n - 1; j >= 0; j--) 
            cout <<  ans[j][i] << " ";
        cout << endl;
    }
}