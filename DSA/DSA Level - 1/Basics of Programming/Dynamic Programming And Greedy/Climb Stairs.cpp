#include <bits/stdc++.h>
using namespace std;

//  Recursive
int climbStairs(int n, int *dp) {
    if(n == 0)
        return 1;
    else if(n < 0)
        return 0;

    if(dp[n] > 0) 
        return dp[n];

    // cout << "Call : " << n << endl;
    int stepCount1 = climbStairs(n - 1, dp);
    int stepCount2 = climbStairs(n - 2, dp);
    int stepCount3 = climbStairs(n - 3, dp);
    int totalStepsCount = stepCount1 + stepCount2 + stepCount3;
    dp[n] = totalStepsCount;
    return  totalStepsCount;
}

// Iterative / Tabulation
int climbStairsTab(int n) {
    int dp[n + 1];
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            dp[i] = dp[i - 1];
        } else if(i == 2) {
            dp[i] = dp[i - 1] + dp[i - 2];
        } else {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
    }
    return dp[n];

}

int main() {
    int n;
    cin >> n;
    int dp[n];
    memset(dp, 0, sizeof(dp));
    cout << climbStairs(n, dp) << endl;
    cout << climbStairsTab(n);

}