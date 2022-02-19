#include <bits/stdc++.h>
using namespace std;

void indicesArray(int *arr, int n, int start, int target) {
    if(start == n) 
        return;
    if(arr[start] == target) 
        cout << start << endl;
    indicesArray(arr, n, start + 1, target);
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    indicesArray(arr, n, 0, target);
}