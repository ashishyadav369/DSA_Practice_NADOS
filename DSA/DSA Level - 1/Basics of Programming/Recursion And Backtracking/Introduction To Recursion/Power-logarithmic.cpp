#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    if(n == 0)
        return 1;
    return x * powerLogarithmic(x, n - 1);
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}