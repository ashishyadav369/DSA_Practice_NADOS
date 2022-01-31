#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    int d;
    cin >> d;
    bool check = true;
    for(int j = 0; j < n; j++) {
        if(arr[j] == d) {
            cout << j;
            check = false;
        }
    }
    if(check) cout << "-1";
    return 0;
}