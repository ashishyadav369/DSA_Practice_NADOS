#include<bits/stdc++.h>
using namespace std;

void inverse(int* arr, int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        int val = arr[i];
        v[val] = i;
    }
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    inverse(arr,n);
}