#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int result = INT_MAX;
  for (int i = 0; i < n; i++) {
    int R;
    cin >> R;
    result = min(R, result);
  }

  cout << result + 1;

  return 0;
}
