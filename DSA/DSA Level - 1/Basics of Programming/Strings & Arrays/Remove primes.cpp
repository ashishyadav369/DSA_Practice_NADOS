#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
void removePrimes(vector<int> v) {
    //write your code here
    vector<int> v1;
    for(int i = 0; i < v.size(); i++) {
        if(!isPrime(v[i])) 
            v1.push_back(v[i]);
    }
    cout << "[";
    for(int i = 0; i < v1.size(); i++) {
        if(i == v1.size() - 1) {
            cout << v1[i]; 

        } else {
            cout << v1[i] << ", "; 

        }
    }
    cout << "]";
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    removePrimes(v);
}