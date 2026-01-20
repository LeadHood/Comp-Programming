#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  unordered_map<string, string> dict;
  vector<string> words;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    words.push_back(s);
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    dict[s1] = s2;
  }

  for (int i = 0; i < n; i++) {
    cout << dict[words[i]] << (i != n - 1 ? " " : "");
  }

  // Tack för mig;
  return 0;
}
