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

    ll n, q;
    cin >> n >> q;

    ll size = 1e9 + 1;

    vector<p2> prefixSums(size, make_pair(0, 0));

    for (ll i = 1; i <= n; i++){
        ll c;
        cin >> c;
        
        vector<ll> ofEach(size);

        for (ll j = 0; j < c; j++){
            ll s;
            cin >> s;

            ofEach[s]++;
        }

        ll sum = 0;
        for (ll j = size - 1; j >= 0; j--){
            sum += ofEach[j];
            if(sum >= prefixSums[j].second){
                prefixSums[j] = make_pair(i, sum);
            }
        }
    }

    for (int i = 0; i < q; i++){
        int a;
        cin >> a;

        if(prefixSums[a].first == 0 && prefixSums[a].second == 0){
            cout << n << '\n';
        }
        else{
            cout << prefixSums[a].first << '\n';
        }

    }
}