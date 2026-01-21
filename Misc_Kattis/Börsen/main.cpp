// #pragma GCC optimize("O3")
// #pragma GCC target("avx2")

#include "bits/allocator.h"
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

    vector<double> sharePrices(n);

    for (i = 0; i < n; ++i){
        cin >> sharePrice;
        sharePrices[i] = sharePrice;
    }

    for (i = 0; i < n; ++i)
    {
        curMoney = maxMoney;
        curShares = maxShares;

        //When having money
        maxShares = max((curMoney - q) / sharePrices[i], maxShares);
        maxMoney = max(curShares * sharePrices[i] - q, maxMoney);
    }
    
    cout << maxMoney;
}