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

    ll n; 
    cin >> n;

    vector<vector<ll>> bags(n, vector<ll>(21));

    for (ll i = 0; i < n; i++){
        ll k;
        cin >> k;

        for (ll j = 0; j < k; j++){
            ll s, n;
            cin >> s >> n;
            bags[i][s + 10] = n;
        }
    }

    ll most = -1;
    p2 mostp;

    for (ll i = 0; i < n; i++){
        vector<ll> b1 = bags[i];
        for (ll j = i + 1; j < n; j++){
            vector<ll> b2 = bags[j];

            ll count = 0;
            for (ll k = 0; k < 21; k++){
                count += abs(b1[k] - b2[20 - k]);
            }

            if(count > most){
                most = count;
                mostp = make_pair(i, j);
            }

            cout << "count: "  << count << endl;
        }
    }

    cout << most; //<< ": " << mostp.first << ", " << mostp.second;
}