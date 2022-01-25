/*

1 <= n <= 100. Also, n is odd.

n = 5
*				*	
	*		*		
		*			
	*		*		
*				*	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int n;
    cin >> n;
    int space = n - 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == i || i + j == n + 1)
                cout << "*\t";
            else 
                cout << "\t";
        }
        cout << endl;
    }
}
