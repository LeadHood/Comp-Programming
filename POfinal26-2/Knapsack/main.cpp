#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int C, n;

  while (cin >> C >> n) {
    vector<int> v(n);
    vector<int> w(n);

    for (int i = 0; i < n; i++) {
      int val, weight;
      cin >> val >> weight;

      v[i] = val;
      w[i] = weight;
    }

    vector<vector<int>> table(n + 1, vector<int>(C + 1, 0));

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= C; j++) {
        if (w[i - 1] > j) {
          table[i][j] = table[i - 1][j];
        } else {
          table[i][j] =
              max(table[i - 1][j], table[i - 1][j - w[i - 1]] + v[i - 1]);
        }
      }
    }

    int j = C;

    vector<int> indexes;
    for (int i = n; i >= 1; i--) {
      if (table[i][j] != table[i - 1][j]) {
        indexes.push_back(i - 1);

        for (int k = 0; k < C + 1; k++) {
          if (table[i - 1][k] == table[i][j] - v[i - 1]) {
            j = k;
            break;
          }
        }
      }
    }

    // for (auto &x : table) {
    //   for (auto &y : x) {
    //     cout << y << ", ";
    //   }
    //   cout << '\n' << endl;
    // }

    cout << indexes.size() << '\n';
    for (auto &x : indexes) {
      cout << x << ' ';
    }
    cout << '\n' << endl;
  }

  return 0;
}
