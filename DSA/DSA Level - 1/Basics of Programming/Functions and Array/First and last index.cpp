/*

n = 15
    1 5 10 15 22 33 33 33 33 33 40 42 55 66 77
d = 33

Output : 5 9


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    
    int data;
    cin >> data;
    int firstIndex = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == data) {
            firstIndex = i;
            break;
        } else {
            firstIndex = -1;
        }
    }
    int lastIndex = 0;
    for(int i = n; i >= 0; i--) {
        if(arr[i] == data) {
            lastIndex = i;
            break;
        } else {
            lastIndex = -1;
        }
    }
    cout << firstIndex << endl << lastIndex;
  
}