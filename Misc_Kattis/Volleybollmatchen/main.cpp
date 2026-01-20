#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  int Ap = 0;
  int Bp = 0;
  int As = 0;
  int Bs = 0;

  for (int i = 0; i < N; i++) {
    char c;
    cin >> c;

    if (c == 'A') {
      Ap++;
    } else if (c == 'B') {
      Bp++;
    }

    if (As == 0 || Bs == 0) {
      if (Ap >= 25 && Ap - 2 >= Bp) {
        As++;
        Ap = 0;
        Bp = 0;
      }

      if (Bp >= 25 && Bp - 2 >= Ap) {
        Bs++;
        Ap = 0;
        Bp = 0;
      }
    } else {
      if (Ap >= 15 && Ap - 2 >= Bp) {
        As++;
        Ap = 0;
        Bp = 0;
      } else if (Bp >= 15 && Bp - 2 >= Ap) {
        Bs++;
        Ap = 0;
        Bp = 0;
      }
    }
  }

  cout << As << ' ' << Bs;

  return 0;
}
