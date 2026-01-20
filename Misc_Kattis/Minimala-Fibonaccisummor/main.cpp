#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> fib;

  int n;
  cin >> n;

  int a = 0;
  int b = 1;

  while (true) {
    if (b >= n) {
      break;
    }

    int temp = b;
    b = a + b;
    a = temp;

    fib.push(b);
  }

  int sum = 0;
  vector<int> nums;

  int u = fib.size();
  for (int i = 0; i < u; i++) {
    if (sum == n) {
      break;
    }

    int f = fib.top();
    fib.pop();

    if (sum + f <= n) {
      sum += f;
      nums.push_back(f);
    }
  }

  cout << nums.size() << "\n";

  for (int &x : nums) {
    cout << x << "\n";
  }

  return 0;
}
