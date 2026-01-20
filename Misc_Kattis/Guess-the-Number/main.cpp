#include <bits/stdc++.h>

using namespace std;

const int n = 1000;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int hi = n + 1;
  int lo = 0;

  while (true) {
    int mid = (hi + lo) / 2;
    cout << mid << endl;

    string s;
    cin >> s;

    if (s == "lower") {
      hi = mid;
    } else if (s == "higher") {
      lo = mid;
    } else if (s == "correct") {
      break;
    }
  }

  return 0;
}
