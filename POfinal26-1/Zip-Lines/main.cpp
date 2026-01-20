#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> connections;
vector<int> dp;
vector<int> heights;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  dp = vector<int>(n, -1);
  connections.resize(n);

  stack<int> st;
  // To the right
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    heights.push_back(num);

    bool abort = false;

    while (!st.empty() && heights[st.top()] <= heights[i]) {
      if (heights[st.top()] == heights[i]) {
        abort = true;
        st.pop();
        break;
      }

      st.pop();
    }

    if (!st.empty()) {
      connections[st.top()].push_back(i);
    }

    st.push(i);
  }

  while (!st.empty()) {
    st.pop();
  }

  // To the left
  for (int i = n - 1; i >= 0; i--) {
    bool abort = false;
    while (!st.empty() && heights[st.top()] <= heights[i]) {
      if (heights[st.top()] == heights[i]) {
        abort = true;
        st.pop();
        break;
      }
      st.pop();
    }

    if (!st.empty() && !abort) {
      connections[st.top()].push_back(i);
    }

    st.push(i);
  }

  // int indexy = 0;
  // for (auto &x : connections) {
  //   cout << indexy << ": ";
  //   for (auto &y : x) {
  //     cout << y << ", ";
  //   }
  //   indexy++;
  //   cout << "\n";
  // }

  vector<int> order(n);
  iota(order.begin(), order.end(), 0);

  sort(order.begin(), order.end(),
       [&](int a, int b) { return heights[a] > heights[b]; });

  for (int u : order) {
    for (int v : connections[u]) {
      dp[v] = max(dp[v], dp[u] + 1);
    }
  }

  int maximum = -1;

  for (int i = 0; i < n; i++) {
    maximum = max(maximum, dp[i]);
  }

  cout << maximum + 1;

  return 0;
}
