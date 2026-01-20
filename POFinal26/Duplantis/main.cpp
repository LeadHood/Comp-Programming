/*
Status:
---------
Complete: true
Points: 100
*/

#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

using p2 = pair<ll, ll>;

#define all(x) begin(x), end(x)

// Vet ej varför jag får fel

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, v;
    cin >> n >> v;

    int r = 0;
    vector<ll> records;

    for (int i = 0; i < n; i++) {
        ll ai;
        cin >> ai;

        if (ai > v) {
            v++;
            r++;
            records.push_back(ai);
        }
    }

    cout << r << '\n';

    ll highest = -1;
    for (int i = records.size() - 1; i >= 0; i--) {
        highest = max(highest, records[i]);
        records[i] = highest;
    }

    for (int i = 0; i < min(r, (int)records.size()); i++) {
        cout << records[i] << " ";
    }
}