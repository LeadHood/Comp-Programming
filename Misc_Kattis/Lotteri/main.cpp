#include <bits/stdc++.h>

using namespace std;

int n, t;
int c = 0;
vector<int> nums;

void rec(int i, int s) {
  if (i == n) {
    if (s == t) {
      c++;
    }

    return;
  }

  rec(i + 1, s + nums[i]);
  rec(i + 1, s);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> t;

  for (int i = 0; i < n; i++) {
    int w;
    cin >> w;
    nums.push_back(w);
  }

  rec(0, 0);

  cout << (double)c / (pow(2, n)) * 100;

  return 0;
}
