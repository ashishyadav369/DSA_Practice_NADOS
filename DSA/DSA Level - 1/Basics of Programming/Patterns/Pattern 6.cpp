/*

1 <= n <= 100. Also, n is odd.

n = 5
*	*	*		*	*	*	
*	*				*	*	
*						*	
*	*				*	*	
*	*	*		*	*	*

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int space = 1;
    int star = n/2 + 1;
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= star; j++)
            cout << "*\t";

        for(int k = 1; k <= space; k++) 
            cout << "\t";

        for(int l = 1; l <= star; l++)
            cout << "*\t";

        if(i <= n/2) {
            space += 2;
            star--;
        } else {
            space -= 2;
            star++;
        }
        cout << endl;
    }
}