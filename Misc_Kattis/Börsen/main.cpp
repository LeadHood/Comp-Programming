#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, i;
    double q, maxMoney = 100, maxShares = 0, sharePrice, curMoney, curShares;

    cin >> n >> q;

    for (i = 0; i < n; i++)
    {
        sharePrice;
        cin >> sharePrice;

        curMoney = maxMoney;
        curShares = maxShares;

        //When having money
        maxShares = max((curMoney - q) / sharePrice, maxShares);
        maxMoney = max(curShares * sharePrice - q, maxMoney);
    }
    
    cout << maxMoney;
}