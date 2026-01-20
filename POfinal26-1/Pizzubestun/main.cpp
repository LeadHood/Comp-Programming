#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> ps;
  ps.reserve(n);

  ll sum = 0;

  for (int i = 0; i < n; i++) {
    string t;
    int p;
    cin >> t >> p;

    ps.push_back(p);
  }

  sort(ps.begin(), ps.end(), greater<int>());
  // reverse(ps.begin(), ps.end());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      sum += ps[i];
    }
  }

  cout << sum;

  return 0;
}
