#include<iostream>
using namespace std;

const int MAX_N = 50;
int n, k[MAX_N];

void solve() {

  int ans = 0;

  for (int a = 0; a < n; a++) {
    for (int b = a + 1; b < n; b++) {
      for (int c = b + 1; c < n; c++) {
        int len = k[a] + k[b] + k[c];
        int maxValue = max(k[a], max(k[b], k[c]));
        int restLen = len - maxValue;

        if (maxValue < rest) {
          ans = max(ans, len);
        }
      }
    }
  }

  if (f) {
    cout << "Yes" << endl;
  } 
  else cout << "No" << endl;

}

int main() {
  cin >> n ;
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }

  solve();

  return 0;
}