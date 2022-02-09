#include <bits/stdc++.h>
using namespace std;

// Iterative Approach
vector<string> gss(string s){
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
// Recurcive
vector<string> gssRec(string s){
    if(s.empty()){
        vector<string> base;
        base.push_back("");
        return base;
    }

    char ch = s[0];
    string ros = s.substr(1);

    vector<string> rres = gss(ros);
    vector<string> mres;

    for (string s : rres)
        mres.push_back(s);

    for (string s : rres)
        mres.push_back(ch + s);

    return mres;
}


int main(){
    string s;
    cin >> s;
    vector<string> ans = gssRec(s);
    int cnt = 0;
    for(int i = 0; i < ans.size(); i++) {
        cout << "pp";
        cout << ans[i] << endl;
    }
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