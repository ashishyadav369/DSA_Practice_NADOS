#include<iostream>
using namespace std;

int digFreq(int n, int d) {
    int c = 0;
    while(n != 0) {
        int dig = n % 10;
        n /= 10;
        if(dig == d) 
            c++;
    }
  return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}