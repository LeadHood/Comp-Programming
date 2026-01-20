#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    unordered_map<ll, ll> colors;

    for(ll i = 1; i <= n; i++){
        int a;
        cin >> a;
        colors[i] = a;
    }

    vector<ll> layerColor = {0};
    for (ll i = 0; i < m; i++){
        ll c;
        cin >> c;
        layerColor.push_back(c);
    }

    reverse(all(layerColor));

    bool found = false;
    for(ll i = 1; i <= m; i++){
        ll sub = (i)*(i)*(i);
        if(colors[layerColor[i]] >= sub){
            colors[layerColor[i]] -= sub;
        }
        else{
            found = true;
            cout << i;
            break;
        }
    }

    if(!found){
        cout << m;
    }
}