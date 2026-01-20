#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int l, r, q;
  cin >> l >> r >> q;

  map<int, int> leftCount;
  unordered_map<int, int> lefts;

  map<int, int> rightCount;
  unordered_map<int, int> rights;

  set<int> full;

  for (int i = 0; i < q; i++) {
    char c;
    cin >> c;

    if (c == '+') {
      int s, a, b;
      cin >> s >> a >> b;

      if (a <= l && b >= r) {
        full.insert(s);
      } else if (a <= l) {
        lefts.insert({s, b});
        leftCount[b]++;
      } else if (b >= r) {
        rights.insert({s, a});
        rightCount[a]++;
      }
    } else if (c == '-') {
      int s;
      cin >> s;

      full.erase(s);

      if (lefts.size() && lefts.find(s) != lefts.end()) {
        leftCount[lefts[s]]--;
        if (leftCount[lefts[s]] == 0) {
          leftCount.erase(lefts[s]);
        }
        lefts.erase(s);
      } else if (rights.size() && rights.find(s) != rights.end()) {
        rightCount[rights[s]]--;
        if (rightCount[rights[s]] == 0) {
          rightCount.erase(rights[s]);
        }
        rights.erase(s);
      }
    }

    if (full.size()) {
      cout << 1;
    } else if (leftCount.size() && rightCount.size() &&
               leftCount.rbegin()->first >= rightCount.begin()->first) {
      cout << 2;
    } else {
      cout << -1;
    }

    cout << '\n';
  }

  return 0;
}
