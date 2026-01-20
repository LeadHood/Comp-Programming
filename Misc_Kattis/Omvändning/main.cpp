#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<string> w;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    w.push_back(s);
  }

  reverse(w.begin(), w.end());

  for (int i = 0; i < n; i++) {
    cout << w[i] << "\n";
  }

  return 0;
}
