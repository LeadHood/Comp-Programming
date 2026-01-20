#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  ll b;
  cin >> b;

  vector<int> a;

  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    a.push_back(p);
  }

  ll sum = a[0];
  int i = 0;
  int j = 0;

  while (true) {
    if (j == n - 1) {
      cout << j - i + 1;
      break;
    }

    if (sum + a[j + 1] <= b) {
      sum += a[j + 1];
      j++;
    } else {
      sum += a[j + 1];
      sum -= a[i];

      i++;
      j++;
    }
  }

  return 0;
}
