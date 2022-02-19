#include <iostream>
#include <vector>
using namespace std;

void coinchangecombination(vector<int> coins, int amt, int idx, int sum) {
    if(coins.size() == idx) {
        if(amt == sum) {
            cout << sum << endl;
        }
        return;   
         }
    
    coinchangecombination(coins, amt, idx + 1, sum + coins[idx]);
    coinchangecombination(coins, amt, idx + 1, sum);

}

int main() {
  int n;
  cin >> n;
  vector<int> coins(n, 0);
  for (int i = 0; i < coins.size(); i++) {
    cin >> coins[i];
  }
  int amt;
  cin >> amt;
  vector<int> dp(amt + 1, 0);
  coinchangecombination(coins, amt, 0, 0);

}