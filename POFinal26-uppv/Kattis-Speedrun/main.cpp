/*
Status:
---------
Complete: ig
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

    ll s, p, a, b;
    cin >> s >> p >> a >> b;

    ll ans = LLONG_MAX;

    for (int j = 0; j < 1e5; j++){
        if((s + j) * 2 > p + j){
            ans = min(ans, j * b);
        }
        else{
            int i = (p - 2 * s - j)/2 + 1;
            ans = min(ans, i * a + j * b);
        }
    }   
    

    cout << ans;
}