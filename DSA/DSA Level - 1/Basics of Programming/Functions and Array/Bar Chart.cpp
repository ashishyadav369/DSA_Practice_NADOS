/*

n = 5

3 1 0 7 5

Output : 

			*		
			*		
			*	*	
			*	*	
*			*	*	
*			*	*	
*	*		*	*	

*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    for(int j = max; j >= 1; j--) {

        for(int k = 0; k < n; k++) {
            if(arr[k] >= j) {
                cout << "*\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;

    }    
}