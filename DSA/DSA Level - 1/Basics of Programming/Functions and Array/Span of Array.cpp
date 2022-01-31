#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int max = -1;
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        if(num > max) 
            max = num;
        if(num < min) 
            min = num;
    }
    cout << max - min ;
}