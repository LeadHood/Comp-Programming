#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int segments[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  int timeSegments[86400];

  int n;
  cin >> n;

  int h = 0;
  int m = 0;
  int s = 0;
  int t = 0;

  while (true) {
    if (s == 60) {
      m++;
      s = 0;
    }

    if (m == 60) {
      h++;
      m = 0;

      if (h == 24) {
        break;
      }
    }

    int sum = 0;
    sum += (segments[h / 10] + segments[h % 10]);
    sum += (segments[m / 10] + segments[m % 10]);
    sum += (segments[s / 10] + segments[s % 10]);

    timeSegments[3600 * h + 60 * m + s] = sum;

    s++;
  }

  int result = 0;
  int sum = 0;
  int r = 0;
  int l = 0;

  for (int r = 0; r < 86400; r++) {
    sum += timeSegments[r];

    while (sum > n && l <= r) {
      sum -= timeSegments[l];
      l++;
    }

    if (sum == n) {
      result++;
    }
  }

  cout << result;

  return 0;
}
