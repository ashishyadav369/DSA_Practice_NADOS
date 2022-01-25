#include <bits/stdc++.h>
using namespace std;

void numOfDigits(int n) {
    int temp = n;
    int count = 0;
    while(temp > 0) {
        temp /= 10;
        count++;
    }
    int div = pow(10,count-1);
    while(div != 0) {
        int digit = n / div;
        cout << digit << endl;
        n = n % div;
        div /= 10;

    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    numOfDigits(n);
}