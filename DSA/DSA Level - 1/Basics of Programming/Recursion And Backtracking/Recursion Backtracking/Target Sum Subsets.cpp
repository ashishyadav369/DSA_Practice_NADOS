#include<bits/stdc++.h>
using namespace std;

    // set is the subset
    // sos is sum of subset
    // tar is target
void printTargetSumSubsets(int *arr, int idx, string set, int sos, int tar, int size){
    //write your code here
    if(idx == size) {
        if(sos == tar) 
            cout << set + "." << endl;
        return;
    }
    cout << idx << endl;
    printTargetSumSubsets(arr, idx + 1, set + to_string(arr[idx]) + ", ", sos + arr[idx], tar, size);
    // cout << "---" << sos << endl;
    printTargetSumSubsets(arr, idx + 1, set, sos, tar, size);
}


int main(){ 
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    printTargetSumSubsets(arr, 0, "", 0, target, n);
    delete []arr;
    return 0;

}