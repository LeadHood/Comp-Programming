#include <bits/stdc++.h>
#include <climits>

using namespace std;

int rec(int n, int c, int d) {
  if (c > n) {
    return INT_MAX;
  } else if (c == n) {
    return d;
  }

  return min({
      rec(n, c + 7, d + 1),
      rec(n, c + 17, d + 1),
      rec(n, c + 27, d + 1),
      rec(n, c + 37, d + 1),
      rec(n, c + 47, d + 1),
      rec(n, c + 57, d + 1),
      rec(n, c + 67, d + 1),
  });
}

void solve() {
  int n;
  cin >> n;

  int r = n % 10;

  if (n < 70) {
    int val = rec(n, 0, 0);

    if (val == INT_MAX) {
      cout << -1;
    } else {
      cout << val;
    }

    cout << '\n';

    return;
  }

  if (r == 0) {
    cout << 10;
  } else if (r == 1) {
    cout << 3;
  } else if (r == 2) {
    cout << 6;
  } else if (r == 3) {
    cout << 9;
  } else if (r == 4) {
    cout << 2;
  } else if (r == 5) {
    cout << 5;
  } else if (r == 6) {
    cout << 8;
  } else if (r == 7) {
    cout << 1;
  } else if (r == 8) {
    cout << 4;
  } else {
    cout << 7;
  }

  cout << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
