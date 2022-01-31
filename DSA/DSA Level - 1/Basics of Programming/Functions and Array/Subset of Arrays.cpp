#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int length = pow(2,n);
    // cout << length;
    for(int i = 0; i < length; i++) {
        int temp = i;
        string s;
        for(int k = n - 1; k >= 0; k--) {
            int rem = temp % 2;
            temp /= 2;
            if(rem == 0) {
                s = "-	" + s;  
            } else {
                s = to_string(arr[k]) + "	" + s;
            }
        }
    cout << s << endl;

    }
}