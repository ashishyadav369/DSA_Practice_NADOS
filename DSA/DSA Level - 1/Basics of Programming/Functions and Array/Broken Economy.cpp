/*

n = 10
1 5 10 15 22 33 40 42 55 66
d = 34

Output : 40 33

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];

    int data;
    cin >> data; 
    int minN = INT_MAX;
    int minP = INT_MAX;
    int indexN = 0;
    int indexP = 0;
    for(int i = 0; i < n; i++) {
        int min = data - arr[i];
        if(data == arr[i]) {
            cout << data;
            return 0;
        }
        if(min > 0) {
            if(minP > min && data > arr[i]) {
                minP = min;
                indexP = i;
            }
        } else {
            if(minN > -1 * min && data < arr[i]) {
                minN = min;
                indexN = i;
            }
        }
    }
    cout << arr[indexN] << endl << arr[indexP];
}