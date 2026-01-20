#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> W;

  for (int i = 0; i < n; i++) {
    int w;
    cin >> w;

    W.push_back(w);
  }

  vector<int> W2 = W;

  sort(W.begin(), W.end());

  int last = 0;

  unordered_map<int, int> m;

  for (int i = 0; i < n; i++) {
    if (last != W[i])
      m[W[i]] = i;

    last = W[i];
  }

  for (int i = 0; i < n; i++) {
    cout << m[W2[i]] << (i == n - 1 ? "" : " ");
  }

  return 0;
}
