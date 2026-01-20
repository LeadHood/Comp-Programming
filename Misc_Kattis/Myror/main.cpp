#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  const int insects = 42;
  int b;
  cin >> b;

  float x = (float)(336 - b) / 2;
  float y = (float)(b - 252) / 2;

  if (x != (int)x || y != (int)y || x < 0 || y < 0) {
    cout << "FEL";
  } else {
    cout << x;
  }

  return 0;
}
