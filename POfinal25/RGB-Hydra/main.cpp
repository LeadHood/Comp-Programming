#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long R, G, B, k;
  cin >> R >> G >> B >> k;

  if (R == 0 && G == 0 && B == 0) {
    cout << 0;
  } else if (G == 0 && B == 0) {
    cout << max(R, R + k - 2);
  } else {
    cout << R + k;
  }

  return 0;
}
