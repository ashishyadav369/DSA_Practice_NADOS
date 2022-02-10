#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int num, int count) {
    if(n == 0) {
        return -1;
    }
    if(arr[0] == num) {
        return count - 1;
    }
    int ans = firstIndex(arr + 1, n - 1, num, count + 1); 
    return ans;
}

int main () {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int num, count = 1;
    cin >> num;
    cout << firstIndex(arr, n, num, count);
    delete [] arr;
    return 0;

}