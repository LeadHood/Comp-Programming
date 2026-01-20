#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int M, S, G;
  cin >> M >> S >> G;

  double A, B;
  cin >> A >> B;

  int L, R;
  cin >> L >> R;

  double tL = 0, tR = 0;

  tR += (double)M / S;
  tL += (double)M / G;

  tL += (double)L / A;
  tR += (double)R / B;

  cout << (tR < tL ? "latmask" : "friskus");

  return 0;
}
