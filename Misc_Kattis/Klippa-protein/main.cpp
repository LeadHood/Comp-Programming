#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  set<char> letters;

  string p;
  cin >> p;
  int k;
  cin >> k;

  for (int i = 0; i < p.size(); i++) {
    letters.insert(p[i]);
  }

  int minCuts = INT_MAX;

  for (auto &x : letters) {
    vector<int> sizes;

    int add = 0;
    for (int i = 0; i < p.size(); i++) {
      if (p[i] == x) {
        if (add != 0) {
          sizes.push_back(add);
        }
        add = 0;
        continue;
      }

      add++;
    }

    if (add != 0) {
      sizes.push_back(add);
    }

    int cuts = 0;
    for (int i = 0; i < sizes.size(); i++) {
      cuts += ceil((double)sizes[i] / k);
    }

    minCuts = min(minCuts, cuts);
  }

  cout << minCuts;

  return 0;
}
