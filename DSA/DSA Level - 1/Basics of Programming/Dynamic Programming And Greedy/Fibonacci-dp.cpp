#include <bits/stdc++.h>
using namespace std;

int fibRec(int n, int *dp) {
    if(n == 0 || n == 1)
        return n;

    if(dp[n] != 0) 
        return dp[n];
        
    int calc1 = fibRec(n - 1, dp);
    int calc2 = fibRec(n - 2, dp);
    int ans = calc1 + calc2;
    return dp[n] = ans;
}

void fib(int n) {
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    cout << dp[n];
}

int main() {
    int n;
    cin >> n;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    fib(n);
    cout << fibRec(n, dp);
}