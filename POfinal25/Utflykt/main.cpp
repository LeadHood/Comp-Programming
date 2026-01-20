#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> vs;
  vs.reserve(n);

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    vs.push_back(v);
  }

  sort(vs.begin(), vs.end());

  vector<int> sums;

  int sum = 0;
  for (int i = 1; i < n; i++) {
    sum += i * (vs[i] - vs[i - 1]);
    cout << sum << '\n';
  }

  int lowest = INT_MAX;
  for (int i = 0; i < n; i++) {
  }

  return 0;
}
