#include <bits/stdc++.h>
using namespace std;

void mazePath(int r, int c, int dr, int dc, string ans){

    if(r == dr && c == dc) {
        cout << ans << endl;
        return;
    }
    if(c < dc)
        mazePath(r, c + 1, dr, dc, ans + "h");
    if(r < dr)
        mazePath(r + 1, c, dr, dc, ans + "v");
}

int main() {
    int n, m;
    cin >> n >> m;
    mazePath(0, 0, n - 1, m  - 1, "");
}