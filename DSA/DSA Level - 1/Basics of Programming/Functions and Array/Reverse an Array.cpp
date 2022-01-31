#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    int end = n - 1;
    int start = 0;
    while(start <= end) {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    reverse(arr,n);
    display(arr,n);
}