#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, p;
  cin >> a >> p;

  if (a * 7 > p * 13) {
    cout << "Axel";
  } else if (a * 7 < p * 13) {
    cout << "Petra";
  } else {
    cout << "lika";
  }

  return 0;
}
