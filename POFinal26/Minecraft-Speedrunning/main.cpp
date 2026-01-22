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

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;

    vector<p2> portals(n);

    for (ll i = 0; i < n; i++){
        ll x, t;
        cin >> x >> t;

        portals[i] = make_pair(x, t);
    }

    ll minDist = s;
    p2 bestPortal = portals[n - 1];

    for (ll i = n - 2; i >= 0; i--){
        p2 currPortal = portals[i];
        p2 nextPortal = portals[i + 1];

        ll dist1 = currPortal.first * 8 + currPortal.second + (bestPortal.first - currPortal.first) + (s - bestPortal.first*8) + bestPortal.second;
        ll dist2 = currPortal.first * 8 + currPortal.second + (nextPortal.first - currPortal.first) + (s - nextPortal.first*8) + nextPortal.second;
        
        minDist = min(minDist, dist1);

        if(dist2 < dist1){
            bestPortal = nextPortal;
        }
    }

    cout << minDist;
}