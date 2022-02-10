#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int start, int end) {
    if(start == end)
        return;
    cout << arr[start] << endl;
    display(arr, start + 1, end);
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
    delete []arr;
}