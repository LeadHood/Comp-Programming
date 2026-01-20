#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  n = 100 - n;

  int c = 0;

  while (true) {
    if (n == 0) {
      break;
    }

    if (n >= 20) {
      n -= 20;
    } else if (n >= 5) {
      n -= 5;
    } else {
      n -= 1;
    }

    c++;
  }

  cout << c;

  return 0;
}
