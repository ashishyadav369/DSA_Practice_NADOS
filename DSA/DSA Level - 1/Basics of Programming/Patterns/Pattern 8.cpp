/*

1 <= n <= 100.

n = 5
				*	
			*		
		*			
	*				
*

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j - i > 0; j--) {
            cout << "\t";
        }
        cout << "*" << endl;
    }
}