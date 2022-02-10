#include <bits/stdc++.h>
using namespace std;

vector<string> getMazePath(int r, int c, int dr, int dc) {

    if(r == dr && c == dc) {
        vector<string> baseCase;
        baseCase.push_back("");
        return baseCase;
    }

    vector<string> col;
    vector<string> row;

    if(c < dc) 
        col = getMazePath(r, c + 1, dr, dc);

    if(r < dr)
        row = getMazePath(r + 1, c, dr, dc);

    vector<string> ans;
    for(int i = 0; i < col.size(); i++)
        ans.push_back("h" + col[i]);

    for(int i = 0; i < row.size(); i++)
        ans.push_back("v" + row[i]);

    return ans;
}

void display(vector<string> ans) {
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << ans[i];
        if(i < ans.size() -1) cout << ", ";
    }
    cout << "]"<<endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> ans = getMazePath(0, 0, n - 1, m - 1);
    display(ans);
    return 0;
}