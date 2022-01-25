/*

1 <= n <= 100. Also, n is odd.

n = 5
		*	
	*		*	
*				*	
	*		*	
		*	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int outSpace = n / 2;
    int inSpace = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= outSpace; j++) {
            cout << "\t";
        }
        if(i != 1 && i != n)
            cout << "*";
        for(int k = 1; k <= inSpace; k++) {
            cout << "\t";
        }
        cout << "*" << endl;
        if(i <= n/2) {
            outSpace--;
            inSpace += 2;
        } else {
            outSpace++;
            inSpace -= 2;
        }
    }
}
