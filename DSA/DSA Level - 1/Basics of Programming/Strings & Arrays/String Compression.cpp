/*

Input : wwwwaaadexxxxxx

Output : wadex
         w4a3dex6

*/

#include<iostream>
#include<string.h>
using namespace std;

void stringCompression01(string str) {
    string s;
    for(int i = 0; i < str.length(); i++) {
        char start = str[i];
        char end = str[i + 1]; 
        if(start != end)
            s += start;
    }
    cout << s << endl;
}

void stringCompression02(string str) {
    string s;
    string s2;
    int c = 1;
    for(int i = 0; i < str.length(); i++) {
        char start = str[i];
        char end = str[i + 1]; 
        if(start == end) {
            c++;
        } else {
            s += start;
            if(c > 1) {
                s2 = to_string(c);
                s += s2;
                c = 1;
            }
        }
    }
    cout << s << endl;
}

int main() {
    string str;
    getline(cin,str);
    stringCompression01(str);
    stringCompression02(str);
}