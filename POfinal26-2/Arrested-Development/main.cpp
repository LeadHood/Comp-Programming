/*
Status:
---------
Complete: false
Points: 0
*/

#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

using p2 = pair<ll, ll>;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> items(n);
    int aSum = 0;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        aSum += a;
        items[i] = make_pair(a, b);
    }

    vector<int> dp(aSum + 1, 1e9), newDp(aSum + 1, 1e9);

    for (int y = 0; y < n; y++){
        int a = items[y].first;
        int b = items[y].second;

        for (int i = 0; i < aSum + 1; i++){
            newDp[i] = dp[i] + b;
        }

        for (int i = aSum; i >= a; i++){
            newDp[i] = min(newDp[i], dp[i - a]);
        }
    }

    int minNum = INT_MAX;

    for (int i = 0; i < aSum + 1; i++){
        //cout << dp[i] << ", ";
        minNum = min(minNum, max(i,  dp[i]));
    }

    cout << minNum;
}