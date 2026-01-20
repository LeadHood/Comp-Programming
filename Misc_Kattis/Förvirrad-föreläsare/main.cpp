#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int u = 0;
  int d = 0;

  int last = -1;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (last != -1) {
      if (num > last) {
        u += num - last;
      } else if (num < last) {
        d += last - num;
      }
    }

    last = num;
  }

  cout << d << " " << u;

  return 0;
}
