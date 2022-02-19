#include<bits/stdc++.h>
using namespace std;

// Recursive (Memoization)
int climbStairsVarSteps( int k, int n , vector<int> &arr, int *dp) {
	if(k > n)
	return 0;
	
	if(k == n)
	    return 1;
	
	if(dp[k] != 0)
	    return dp[k];
	int res = 0;
	for(int i = 1; i <= arr[k]; i++)
	    res += climbStairsVarSteps(k + i, n, arr, dp);
	dp[k] = res;
	return res;
}

// Iterative (Tabulation)
int climbStairsVarStepsTab(int n, vector<int> arr) {
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[n] = 1;
    for(int i = n - 1; i >= 0; i--) 
        for(int j = 1; j <= arr[i] && i + j < n + 1; j++) 
            dp[i] += dp[i + j];
    return dp[0];
}

int main()
{
	int n=0, res=0;
	cin >> n;
    vector<int> arr(n,0);
	for(int i = 0; i < n; i++)
	    cin >> arr[i];
	int dp[n];
    memset(dp, 0, sizeof(dp));
	cout << climbStairsVarSteps(0, n ,arr, dp) << endl;
    cout << climbStairsVarStepsTab(n, arr);
	return 0;	
}
