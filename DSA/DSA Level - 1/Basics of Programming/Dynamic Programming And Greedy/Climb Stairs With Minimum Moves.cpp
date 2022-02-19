#include <iostream>
#include <vector>
using namespace std;

int cs(int arr[], int n) {
    vector<int> dp(n + 1, 0);
    for(int i = n - 1; i >= 0; i--) {
        int minVal = 100;
        for(int j = 1; j <= arr[i] && i + j < n + 1; j++) {
            int val =  dp[i + j] + 1;
            minVal = min(val, minVal);
        }
        dp[i] = minVal;
    }
    return dp[0];
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) {
    cin >> arr[i];
  }
  cout << cs(arr, n);
}