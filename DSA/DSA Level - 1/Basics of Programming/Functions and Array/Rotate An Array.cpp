#include<iostream>
using namespace std;

void reverse(int *arr, int start, int end) {

    while(start <= end) {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }

}

void rotate(int* arr, int n, int k){

    k %= n;
    if(k < 0)
        k += n;
    int s1 = 0;
    int e1 = n - k - 1;
    int s2 = n - k;
    int e2 = n - 1;
    reverse(arr, s1, e1);
    reverse(arr, s2, e2);
    reverse(arr, 0, n - 1);
}

void display(int* arr, int n){

    for(int i = 0 ; i < n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}