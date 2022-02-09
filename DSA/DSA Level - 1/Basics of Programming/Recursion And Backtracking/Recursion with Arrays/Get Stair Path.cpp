/*

-> You are given a number n representing number of stairs in a staircase.
-> You are standing at the bottom of staircase. You are allowed to climb 1 step,
   2 steps or 3 steps in one move.

n = 3
Output : [111, 12, 21, 3]

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n){
    if(n == 0) {
        vector<string> baseCase;
        baseCase.push_back("");
        return baseCase;
    } else if(n < 0) {
        vector<string> baseCase;
        return baseCase;
    }
    vector<string> path1 = get_stair_paths(n - 1);
    vector<string> path2 = get_stair_paths(n - 2);
    vector<string> path3 = get_stair_paths(n - 3);
    vector<string> ans;

    for(auto i : path1) 
        ans.push_back(to_string(1) + i);
    
    for(auto i : path2) 
        ans.push_back(to_string(2) + i);
    
     for(auto i : path3) 
        ans.push_back(to_string(3) + i);
    
    return ans;

}

int main(){
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
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