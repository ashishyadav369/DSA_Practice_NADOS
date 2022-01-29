#include <bits/stdc++.h>
using namespace std;

void charDifference(string s) {
    string s1;
    s1 += s[0];
    for(int i = 0; i < s.length() - 1; i++) {
        char start = s[i];
        char end = s[i + 1];
        s1 += to_string(end - start);
        s1 += end;
    }
    cout << s1;
}

int main() {
    string s;
    cin >> s;
    charDifference(s);
    return 0;
}