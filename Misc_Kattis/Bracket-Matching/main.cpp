#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  unordered_map<char, char> bracks = {{'{', '}'}, {'(', ')'}, {'[', ']'}};

  stack<char> s;

  int n;
  cin >> n;

  bool valid = true;

  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;

    if (bracks.find(c) != bracks.end()) {
      s.push(c);
      continue;
    }

    if (!s.size()) {
      valid = false;
      break;
    }

    if (bracks[s.top()] != c) {
      valid = false;
      break;
    }
    s.pop();
  }

  if (!s.empty()) {
    valid = false;
  }

  cout << (valid ? "Valid" : "Invalid");

  return 0;
}
