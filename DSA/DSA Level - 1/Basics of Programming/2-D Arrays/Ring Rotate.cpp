/*

n = 5, m = 7
11 12 13 14 15 16 17
21 22 23 24 25 26 27
31 32 33 34 35 36 37
41 42 43 44 45 46 47
51 52 53 54 55 56 57
s = 2, r = 3

Output :

11 12 13 14 15 16 17
21 25 26 36 46 45 27
31 24 33 34 35 44 37
41 23 22 32 42 43 47
51 52 53 54 55 56 57

Logic :
    Firstly Select the shell no. box and store it in 1 - D Array
    Then rotate the 1 - D Array  
    Replace elements in chosen shell with rotated array

*/

#include<bits/stdc++.h>
using namespace std;


vector<int> fillArray(vector<vector<int> >&arr, int s) {
    vector<int> v; 
    int nS = s - 1;
    int minRow = nS;
    int maxRow = arr.size() - s;
    int minCol = nS;
    int maxCol = arr[0].size() - s;
    // Left 
    for(int i = minCol, j = minRow; j <= maxRow ;j++)
            v.push_back(arr[j][i]); 
    minCol++;
    // Bottom
    for(int i = maxRow, j = minCol; j <= maxCol; j++) 
        v.push_back(arr[i][j]);
    maxRow--;
    // Right
    for(int j = maxCol, i = maxRow; i >= minRow; i--)
        v.push_back(arr[i][j]);
    maxCol--;
    // Top
    for(int i = minRow, j = maxCol; j >= minCol; j--)
        v.push_back(arr[i][j]);
    return v;
}

void reverse(vector<int> &v, int start, int end) { 
    while(start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

void arrayRotate(vector<int>& v, int r) {
    r %= v.size();  // Because after rotating array to times of length we will obtain same array
    if(r < 0)
        r += v.size();
    int start = 0;
    int end = v.size() - 1;
    int start1 = 0;
    int end1 = v.size() - (r + 1);
    int start2 = v.size() - r;
    int end2 = v.size() - 1;
    // First Part Of Array
    reverse(v, start1, end1);
    // Second Part Of Array
    reverse(v, start2, end2);
    // Complete Array
    reverse(v, start, end);
}

void fillShell(vector<vector<int> >&arr, vector<int> &v, int s) {
    int nS = s - 1;
    int minRow = nS;
    int maxRow = arr.size() - s;
    int minCol = nS;
    int maxCol = arr[0].size() - s;
    int k = 0;

    for(int i = minCol, j = minRow; j <= maxRow ;j++) {
        arr[j][i] = v[k]; 
        k++;
    }        
    minCol++;
    for(int i = maxRow, j = minCol; j <= maxCol; j++) {
        arr[i][j] = v[k];
        k++;
    }
    maxRow--;
    for(int j = maxCol, i = maxRow; i >= minRow; i--) {
        arr[i][j] = v[k];
        k++;
    }
    maxCol--;
    for(int i = minRow, j = maxCol; j >= minCol; j--){
        arr[i][j] = v[k];
        k++;
    }
}
void display(vector<vector<int> >&arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0;j<arr[0].size();j++)
            cout << arr[i][j] << " ";
        cout<<endl;
    }
}

void rotateShell(vector<vector<int> >&arr, int s, int r) {
    vector<int> v = fillArray(arr, s);
    arrayRotate(v, r);
    fillShell(arr, v, s);
}

int main() {
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int> > arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];  
    cin >> s >> r;
    rotateShell(arr, s, r);
    display(arr);
}