/*

1 <= n <= 44

n = 5

1	
1	1	
1	2	1	
1	3	3	1	
1	4	6	4	1	

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int cal = 1;
        for(int j = 0; j <= i; j++) {
            cout << cal << "\t";
            int calc = cal * (i - j) / (j + 1);
            cal = calc;
        }
        cout << endl;
    }   
}
