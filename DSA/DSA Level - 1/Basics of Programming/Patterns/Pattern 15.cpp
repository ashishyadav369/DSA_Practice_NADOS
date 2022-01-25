/*

1 <= n <= 10. Also, n is odd.

n = 5

		1	
	2	3	2	
3	4	5	4	3	
	2	3	2	
		1	
*/

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int space = n / 2;
    int stars = 1;
    int num = 1;
    for(int i = 1; i <= n; i++) {
        int calc = 1;
        for(int j = 1; j <= space; j++) {
            cout << "\t";
        }
        int cVal = num;
        for(int k = 1; k <= stars; k++) {
            cout << cVal << "\t";
            if(k <= stars / 2) {
                cVal++;
            } else {
                cVal--;
            }
            
        }
        cout << endl;
        if(i <= n / 2) {
            space--;
            stars += 2;
            num++;
        } else {
            space++;
            stars -= 2;
            num--;
        }
    }   
}