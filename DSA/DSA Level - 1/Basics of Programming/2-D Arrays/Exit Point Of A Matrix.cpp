/*
Matrix will only consist of 0 , 1
If it encounters 1 turn 90 deg right


n = 4, m = 4

0 0 1 0
1 0 0 0
0 0 0 0
1 0 1 0

Output = 1 3

Explanation :

0 > 0 > 1
Logic : Basically we have two increase and decrease
value of i and j indexes as per direction 
(East = 0, South = 1, West = 2, North = 3 )
it'll travesrse head on if  val is 0 else turn right
So,       East > South > West > North
if val 1 is encountered simply increase dir by 1
if dir = 0 ,    i++ 
if dir = 1 ,    j++
if dir = 2 ,    i--
if dir = 3 ,    j--
dir = (dir + arr[i][j]) % 4 : Modulo 4 is because dir
                              will be from 0 - 3



D-R-Y Run Of Above Testcase
i j dir
0 0 0
0 1 0
0 2 1
1 2 1
2 2 1
3 2 2
3 1 2
3 0 3
2 0 3
1 0 2
1 1 2
1 2 2
1 3 3 -> Exit Point 

*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int dir = 0; // East = 0, South = 1, West = 2, North = 3 
    int i = 0;
    int j = 0;
    while(true) {
        dir = (dir + arr[i][j]) % 4;
        if(dir == 0) {
            j++;
        } else if(dir == 1) {
            i++;
        } else if(dir == 2) {
            j--;
        } else if(dir == 3) {
            i--;
        }
        if(i < 0) {
            i++;
            break;
        } else if(j < 0) {
            j++;
            break;
        } else if(i == n) {
            i--;
            break;
        } else if(j == m) {
            j--;
            break;
        }
        
    }
    cout << i << endl << j;
}