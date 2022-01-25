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

    //write your code here
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < i; k++) {
            cout << "\t";
        }
        for(int j = n; j - i > 0; j--) {
            cout << "*\t";
        }
        cout << endl;
    }

}