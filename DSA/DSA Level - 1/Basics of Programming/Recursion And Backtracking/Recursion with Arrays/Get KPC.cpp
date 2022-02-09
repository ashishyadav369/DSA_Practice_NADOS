#include<bits/stdc++.h>
using namespace std;

vector<string> keypad = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", 
                        "tu", "vwx", "yz"};

vector<string> getKPC(string s) {

    if(s.size() == 0) {
        vector<string> baseCase;
        baseCase.push_back("");
        return baseCase;
    }

    char first = s[0];
    string rem = s.substr(1);
    vector<string> sCalc = getKPC(rem);
    vector<string> ans;
    string sec = keypad[first - '0'];
    for(int i = 0; i < sec.length(); i++) {
        char addChar = sec[i];
        for(int j = 0; j < sCalc.size(); j++) 
            ans.push_back(addChar + sCalc[j]);
    }
    return ans;

}

int main(){
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}