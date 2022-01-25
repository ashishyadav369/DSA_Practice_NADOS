#include <bits/stdc++.h>
using namespace std;

string isPrime(int num) {
    // T = O(n)
    int count = 0;
    for(int i = 2; i < num; i++)
        if(num % i == 0) {
            count = 1;
            break;
        }
    if(count == 0)
        return "prime";
    else
        return "not prime";
}

int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        cout << isPrime(num) << endl;
    }  
}