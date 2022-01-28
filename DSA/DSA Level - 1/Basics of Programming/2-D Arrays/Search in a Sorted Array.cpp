/*
n = 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
target = 43

Output : 3 2

*/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int> >& matrix, int target) {
    // T = O(n^2)
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            if(matrix[i][j] == target) {
                cout << i << endl << j;
                return true;
            }
        }
    }
    return false;
}
bool searchMat(vector<vector<int> >& matrix, int target) {
    // T = O(N + M) if n == m then O(2N)
    int i = 0;
    int j = matrix.size() - 1;
    while(i < matrix.size() && j >= 0) {
        if(target == matrix[i][j]){
            cout << i << endl << j;
            return true;
        }
        else if(target > matrix[i][j])
            i++;
        else if(target < matrix[i][j])
            j--;
    }
    return false;
}

int main() 
{
    int n, target;
    cin>>n;
    vector<vector<int> > mat(n, vector<int> (n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>mat[i][j];
    cin>>target;
    if(!searchMat(mat, target)) cout<<"Not Found\n";
}
