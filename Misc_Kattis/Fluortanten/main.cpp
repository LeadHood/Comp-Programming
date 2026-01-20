#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll>a(n + 1);

    bool found = false;

    for (ll i = 1; i <= n; i++){
        ll ai;
        cin >> ai;

        if(ai == 0){
            found = true;
            continue;
        }

        if(!found){
            a[i + 1] = ai * (i + 1);
        }
        else{
            a[i] = ai * i;
        }
    }

    ll sum = 0;

    for (ll i = 1; i <= n; i++){
        sum += a[i];
    }

    //cout << sum << '\n';

    ll mSum = sum;

    for (int i = 2; i <= n; i++){
        sum -= a[i];
        sum += a[i]/(i) * (i - 1);

        mSum = max(mSum, sum);
        //cout << i << ": " << sum << '\n';
    }

    cout << mSum;
}