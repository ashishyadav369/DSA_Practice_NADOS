#include <iostream>
using namespace std;

int maxElement = -1;

int max(int arr[], int start, int end){
    if(start == end)
        return 0;

    if(maxElement < arr[start]) 
        maxElement = arr[start];
    
    max(arr, start + 1, end);
    return maxElement;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
