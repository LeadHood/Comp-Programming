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

    ll i = 1;
    ll cnt = 0;
    while(true){
        if(i * (i+ 1) * (i+ 2) < n){
            i++;
            cnt++;
        }
        else{
            break;
        }
    }

    cout << cnt;
}