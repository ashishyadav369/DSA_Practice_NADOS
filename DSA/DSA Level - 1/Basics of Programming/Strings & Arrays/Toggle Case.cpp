/*
Input : pepCODinG
Output : PEPcodINg
*/

#include <bits/stdc++.h>
using namespace std;

void toggleString(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') 
            s[i] += 32;
        else 
            s[i] -= 32;
    }
    cout << s;
}

int main() {
    string s;
    cin >> s;
    toggleString(s);
    return 0;
}