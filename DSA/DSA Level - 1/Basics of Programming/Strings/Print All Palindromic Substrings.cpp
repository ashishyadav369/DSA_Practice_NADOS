/*
 String = abcc

 Output : a b c cc c
 Print all substring which are palindrome
*/

#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    bool check = true;
    while(i <= j) {
        if(s[i] != s[j]) {
            check = false;
            break;
        }
        i++;
        j--;
    }
    if(check) cout << s << endl;
}

void getSubstring(string str, int num) {
    if(num == str.length())
        return ;
    string s;
    for(int i = num; i < str.length(); i++) {
        s += str[i];
        checkPalindrome(s);
    }
    getSubstring(str,num + 1);
}


int main() {
    string str = "abca";
    cin >> str;
    /*
    Iterative way to find sub-string
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            cout << subStr << endl;
        }
    }
    */
    int num = 0;
    getSubstring(str , num);
}
