/*

1 <= n <= 10.

n = 7

1												1	
1	2										2	1	
1	2	3								3	2	1	
1	2	3	4						4	3	2	1	
1	2	3	4	5				5	4	3	2	1	
1	2	3	4	5	6		6	5	4	3	2	1	
1	2	3	4	5	6	7	6	5	4	3	2	1	

*/

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int space = 2*n - 2;
    int z = 1;
    for(int i = 1; i <= n; i++) {
        int val = 1;
        for(int k = 1; k <= i; k++) {
            cout << val << "\t";
            val++;
        }
        for(int j = 1; j < space; j++) {
            cout << "\t";
        } 
        if(z == n) {
            z--;
            val--;
        }
        for(int l = 1; l <= z; l++) {
            val--;
            cout << val << "\t";
        }
        cout << endl;
        space -= 2;
        z++;
        // val++;
    }
}