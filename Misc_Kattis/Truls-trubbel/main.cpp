#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int T = 0;
  int H = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'T') {
      T++;
    } else if (s[i] == 'H') {
      H++;
    }

    if (T >= 11 && T - 2 >= H) {
      H = 0;
      T = 0;
    } else if (H >= 11 && H - 2 >= T) {
      H = 0;
      T = 0;
    }
  }

  cout << T << '-' << H;

  return 0;
}
