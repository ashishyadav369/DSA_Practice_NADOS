/*

1 <= n <= 10.

n = 5

		*	
		*	*	
*	*	*	*	*	
		*	*	
		*	

*/

#include <iostream>
using namespace std;

int main(int agrc, char**argv){
    int n;
    cin >> n;
    int star = 1;
    for(int i = 1; i <= n; i++) {

        if(i != n / 2 + 1)
        for(int j = 1; j <= n / 2; j++) {
            cout << "\t";
        }
        else {
            for(int l = 1; l <= n / 2; l++) {
                cout << "*\t";
            }
        }
        for(int k = 1; k <= star; k++) {
            cout << "*\t";
        }
        cout << endl;
        if(i <= n/2) {
            star ++;
        } else {
            star--;
        }
    }
}