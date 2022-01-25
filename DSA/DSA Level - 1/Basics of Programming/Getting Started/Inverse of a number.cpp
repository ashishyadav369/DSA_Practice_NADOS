#include <bits/stdc++.h>
using namespace std;

void inverseNum(int n) {
    int num = 0;
    int temp = 1;
    while(n != 0) {
        int digit = n%10;
        int id = temp;
        int p = pow(10,digit-1);
        num += id*p;
        n /= 10;
        temp++;
    }
    cout << num;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    inverseNum(n);
}