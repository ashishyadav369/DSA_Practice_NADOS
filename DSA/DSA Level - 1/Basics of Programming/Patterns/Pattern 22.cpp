/*

1 <= n <= 10. Also, n is odd.

n = 9

*	*	*	*	*	*	*	*	*	
	*	*	*	*	*	*	*	
		*	*	*	*	*	
			*	*	*	
				*	
			*		*	
		*				*	
	*						*	
*	*	*	*	*	*	*	*	*

*/

#include <iostream>
using namespace std;

int main(int agrc, char**argv){
    int n;
    cin >> n;
    int star = n;
    int space = 1;
    for(int i = 1; i <= n; i++) {
         for(int k = 1; k < space; k++) {
            cout << "\t";
        }
        for(int j = 1; j <= star; j++) {
            if(i >= n/2 + 1)
                if(i < n && j > 1 && j < star)
                    cout << "\t";
                else 
                    cout << "*\t";
            else    
                cout << "*\t";
        }
       
        cout << endl;
        if(i <= n/2) {
            space++;
            star -= 2;
        } else {
            space--;
            star += 2;
        }
    }
}