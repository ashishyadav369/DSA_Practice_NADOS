#include <iostream>
using namespace std;

void fib(int n) {
    int a = 0;
    int b = 1;
    int temp = 0; 
    cout << a << endl << b << endl;
    for(int i = 0; i < n - 2; i++) {
        temp = a + b;
        a = b;
        b = temp;
        cout << b << endl;  
    }
}

int main(int argc, char **argv) {
    int n;
    cin >> n;
    fib(n);   
}