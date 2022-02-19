#include <bits/stdc++.h>
using namespace std;
int flag = 0;
void targetSum(int arr[], int n, int target, int start, int sum) {

    if(start == n) {
        if(sum == target) {
            flag = 1;
        }
        return ;
    }


    targetSum(arr, n, target, start + 1, sum + arr[start]);
    targetSum(arr, n, target, start + 1, sum);

    // if(flag == 1) {
    //     cout << true;
    // } else {
    //     cout << false;
    // }

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin  >> target;
    targetSum(arr, n, target, 0, 0);
    if(flag == 1) {
        cout << "true";
    } else {
        cout << "false";
    }
}