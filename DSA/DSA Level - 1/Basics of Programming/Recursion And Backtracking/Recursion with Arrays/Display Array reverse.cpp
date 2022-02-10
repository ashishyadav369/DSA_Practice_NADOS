#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int start, int end) {
    if(start == end)
        return;
    display(arr, start + 1, end);
    cout << arr[start] << endl;
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