#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, T;
  cin >> N >> T;

  vector<int> ts;

  for (int i = 0; i < N; i++) {
    int ti;
    cin >> ti;

    ts.push_back(ti);
  }

  sort(ts.begin(), ts.end());
  reverse(ts.begin(), ts.end());

  for (int i = 0; i < N; i++) {
    for (int j = i - 1; j >= 0; j--) {
      ts[j] -= T;

      if (ts[j] <= 0) {
        cout << "NO";
        return 0;
      }
    }
  }

  cout << "YES";

  return 0;
}
