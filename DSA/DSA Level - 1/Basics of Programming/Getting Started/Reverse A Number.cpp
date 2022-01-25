#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    while(n != 0) {
        int digit = n % 10;
        n /= 10;
        cout << digit << endl;
    }
}