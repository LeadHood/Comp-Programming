#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<char> p;

  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;

    p.push_back(c);
  }

  int p1 = -1;
  int p2 = -1;

  int lowest = 1e8;

  for (int i = 0; i < n; i++) {
    if (p[i] == '.') {
      p1 = p2;
      p2 = i;

      if (p1 != -1) {
        lowest = min(lowest, p2 - p1 - 1);
      }
    }
  }

  cout << lowest;

  return 0;
}
