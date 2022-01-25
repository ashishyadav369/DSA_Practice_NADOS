/*

1 <= n <= 10. Also, n is odd.

n = 5

*				*	
*				*	
*		*		*	
*	*		*	*	
*				*	

*/

#include <iostream>
using namespace std;

int main(int argc, char**argv){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || j == n)
                cout << "*\t";
            else if (i >= n/2 + 1) {
                if(j + i == n + 1 || i == j) {
                    cout << "*\t";
                } else {
                    cout << "\t";
                }
            }
            else
                cout << "\t";
        }
        cout << endl;
    }
}