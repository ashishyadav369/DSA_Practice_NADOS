#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr1[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }
    int o;
    int p;
    cin >> o >> p;
    int arr2[o][p];
    for(int i = 0; i < o; i++) {
        for(int j = 0; j < p; j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < o; i++) {
        for(int j = 0; j < p; j++) {
            cin >> arr2[i][j];
        }
    }
    if (m != o) {
        cout << "Invalid input";
        return 0; 
    }
    int ans[n][p]; 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
           ans[i][j] = 0;
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}