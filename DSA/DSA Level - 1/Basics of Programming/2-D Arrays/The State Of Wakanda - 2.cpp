/*

n = 4

11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

Output :
11 22 33 44 12 23 34 13 24 14
Here we have to traverse digonally in upper half of the matrix

*/

#include <iostream>
#include <vector>
using namespace std;

void upperDiagonalTraverse(int n, vector<vector<int> > &arr) {

     for(int i = 0; i < n ; i++)
        for(int j = 0 , k = i; k < n; k++, j++) 
            cout << arr[j][k] << endl;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    upperDiagonalTraverse(n, arr);
}