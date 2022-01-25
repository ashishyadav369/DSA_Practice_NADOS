/*
n = 5 and n will be odd

*   *   *   *   *
*   *   *   *
*   *   *
*   *
*  

*/


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = n - i; j > 0; j--) {
            cout << "*\t";
        }
        cout << endl;
    }
}