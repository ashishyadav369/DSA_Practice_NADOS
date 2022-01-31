/*
5
3 1 0 7 5
6
1 1 1 1 1 1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++)
        cin>>a1[i];

    cin >> n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++)
        cin>>a2[i];

    vector<int> v;
    int j = n2 - 1;
    int i = n1 - 1;
    int rem = 0;
    while(i >= 0 || j >= 0) {
        int ans = rem;
        if(i >= 0)
            ans += a1[i];
        if(j >= 0) 
            ans += a2[j];
        rem = ans / 10;
        v.push_back(ans % 10);
        i--;
        j--;
    }

    if(rem > 0)
        cout << rem << endl;

    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << endl;

    return 0;
}