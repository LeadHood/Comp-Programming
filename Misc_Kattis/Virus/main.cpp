#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string F;
  cin >> F;

  queue<char> characters;

  for (int i = 0; i < F.size(); i++) {
    characters.push(F[i]);
  }

  string H;
  cin >> H;

  for (int i = 0; i < H.size(); i++) {
    if (H[i] == characters.front()) {
      characters.pop();
    }

    if (!characters.size()) {
      break;
    }
  }

  cout << (characters.size() ? "Nej" : "Ja");

  return 0;
}
