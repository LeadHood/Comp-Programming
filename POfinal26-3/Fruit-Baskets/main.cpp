#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll result = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> nums;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    nums.push_back(num);
  }

  for (auto &x : nums) {
    result += x * (1LL << (nums.size() - 1));
  }

  for (int i = 0; i < n; i++) {
    if (nums[i] < 200) {
      result -= nums[i];
    } else {
      continue;
    }

    for (int j = i + 1; j < n; j++) {
      if (nums[i] + nums[j] < 200) {
        result -= nums[i] + nums[j];
      } else {
        continue;
      }

      for (int k = j + 1; k < n; k++) {
        if (nums[i] + nums[j] + nums[k] < 200) {
          result -= nums[i] + nums[j] + nums[k];
        }
      }
    }
  }

  cout << result;

  return 0;
}
