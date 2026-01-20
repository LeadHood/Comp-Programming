#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int output = 0;

    for (int i = 1; i <= N; i++)
    {
        output += i * i * i;
    }

    cout << output;
}