#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 100000;
int n;
int a[MAX_N];
int table[MAX_N][3];
int maxNum;
// int test[MAX_N * 3];
vector<int> test;
int ans;

void solve() {
  maxNum = 0;

  for (int i = 0; i < n; i++) {
    table[i][0] = a[i] - 1;
    table[i][1] = a[i];
    table[i][2] = a[i] + 1;

    maxNum = max(maxNum, a[i]);
    for (int j = 0; j < 3; j++) {
      // test[(i - 1) * (j - 1) + (j - 1)] = table[i][j];
      test.push_back(table[i][j]);
    }
  }

  

  for(int i = 0; i < test.size(); i++){
    // ans = max(ans, count(test[0], test[MAX_N - 1], i))
    ans = max(ans, (int)count(test.begin(), test.end(), test[i]));
    
  }
    
  cout << ans << endl;
  
}

int main() {
  cin >> n ;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  solve();

  return 0;
}