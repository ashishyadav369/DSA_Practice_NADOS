#include <bits/stdc++.h>
using namespace std;

vector<string> gss(string s){
    // write your code here
    vector<string> ans;
    int n = s.length();
    int size = pow(2, n);
    for(int i = 0; i < size; i++) {
        int temp = i;
        string sub;
        for(int j = n - 1; j >= 0; j--) {
            int rem = temp % 2;
            temp /= 2;
            if(rem == 0) {
                sub += "";
            } else {
                sub += s[j];
            }
        }
        ans.push_back(sub);
    }
    return ans; 
    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << "[";
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << "]";
}