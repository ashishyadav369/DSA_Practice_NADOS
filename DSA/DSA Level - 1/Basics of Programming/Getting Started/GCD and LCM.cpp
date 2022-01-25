#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int rem = 0;
    int n1 = num1;
    int n2 = num2;
    
    while(num1 % num2 != 0) {
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    int gcd = num2;
    int lcm = (n1 * n2) / gcd;
    cout << gcd << endl << lcm;
}