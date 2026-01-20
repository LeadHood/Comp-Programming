#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int pa, ka, pb, kb, n;
  cin >> pa >> ka >> pb >> kb >> n;

  int lowest = INT_MAX;
  int it = 0;
  int jt = 0;

  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (i * ka + j * kb >= n) {
        if (i * pa + j * pb < lowest) {
          lowest = i * pa + j * pb;
          it = i;
          jt = j;
        }
      }
    }
  }

  cout << it << " " << jt << " " << lowest;

  return 0;
}
