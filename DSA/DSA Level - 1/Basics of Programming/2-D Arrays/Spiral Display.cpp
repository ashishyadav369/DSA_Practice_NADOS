/*
n = 3, m = 5

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35

Output :    11 > 21 > 31 > 32 > 33 > 34 > 
            35 > 25 > 15 > 14 > 13 > 12 >
            22 > 23 > 24
*/

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int minr = 0;
    int maxc = m - 1;
    int minc = 0;
    int maxr = n - 1;
    int size = m * n;
    int c = 0;
    while(c < size) {
        
        // Left
        for(int i = minr, j = minc; i <= maxr && c < size; i++) {
            cout << arr[i][j] << endl;
            c++;
        }
        minc++;
        // Bottom
        for(int i = maxr, j = minc; j <= maxc && c < size; j++) {
            cout << arr[i][j] << endl;
            c++;
        }
        maxr--;
        // Right
        for(int i = maxr, j = maxc; i >= minr && c < size; i--) {
            cout << arr[i][j] << endl;       
            c++;
        }
        maxc--;
        // Top 
        for(int i = minr, j = maxc; j >= minc && c < size; j--) {
            cout << arr[i][j] << endl;
            c++;
        }
        minr++;
    }
}