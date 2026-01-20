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

//Still too slow

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    vector<vector<ll>> countries(n);

    for (ll i = 0; i < n; i++){
        ll c;
        cin >> c;

        countries[i] = vector<ll>(c);

        for (ll j = 0; j < c; j++){
            ll s;
            cin >> s;

            countries[i][j] = s;
        }

        sort(begin(countries[i]), end(countries[i]), greater<ll>());
    }

    vector<ll> queries(q);
    vector<ll> dQueries(q);

    for (ll i = 0; i < q; i++)
    {   
        ll a;
        cin >> a;
        queries[i] = a;
        dQueries[i] = a;
    }

    auto it = unique(all(dQueries));
    dQueries.erase(it, dQueries.end());

    sort(dQueries.begin(), dQueries.end(), [](ll a, ll b){
        return a > b;
    });

    unordered_map<ll, ll> answers;
    vector<ll> countryIslandCount(n);
    ll highest = 0;
    ll index = n - 1;

    for (ll i = 0; i < dQueries.size(); i++){
        ll a = dQueries[i];
        for (ll j = 0; j < n; j++){
            while(true){
                if(countryIslandCount[j] < countries[j].size() && countries[j][countryIslandCount[j]] >= a){
                    countryIslandCount[j]++;
                }
                else{
                    break;
                }
            }

            if(countryIslandCount[j] >= highest){
                highest = countryIslandCount[j];
                index = j;
            }
        }

        answers[a] = index + 1;
    }

    for (ll i = 0; i < q; i++){
        cout << answers[queries[i]] << '\n';
    }
}