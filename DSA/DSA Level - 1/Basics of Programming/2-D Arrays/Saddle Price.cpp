/*

4
11 12 13 14 
21 22 23 24
31 32 33 34
41 42 43 44

41

Saddle Point Row = MaxElement, Col = MinElement; 


*/
#include <iostream>
#include <vector>
using namespace std;

void saddlePoint(int n, vector<vector<int> > &arr) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        int minIndex = 0;
        for(int j = 0; j < arr[i].size(); j++) {
            if(min > arr[i][j]) {
                min = arr[i][j];
                minIndex = j;
            }
        }
        bool check = true;

        for(int j = 0; j < arr.size(); j++) {
            if(arr[j][minIndex] > arr[i][minIndex]) {
                check = false;
                break;
            }
        }

        if(check == true) {
            cout << arr[i][minIndex];
            return ;
        }
        
    }
    cout << "Invalid Input";
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    saddlePoint(n, arr);
}