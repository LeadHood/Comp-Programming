#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, w, d;
  cin >> n >> w >> d;

  int c = 0;

  for (int i = 0; i < n; ++i) {
    int num;
    cin >> num;

    if (num <= w) {
      if (c != d) {
        cout << "Asken\n";
        c++;
      } else {
        cout << "Papperskorgen\n";
      }
    } else {
      cout << "Papperskorgen\n";
    }
  }

  return 0;
}
