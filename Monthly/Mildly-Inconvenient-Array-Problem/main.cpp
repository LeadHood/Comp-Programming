#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

//Tack geeks for geeks
ll maxSubArraySum(vector<ll>& a)
{
    ll res = a[0];
    ll maxEnding = a[0];

    for (int i = 1; i < a.size(); i++) {
        maxEnding = max(a[i], maxEnding + a[i]);
        res = max(res, maxEnding);
    }

    return res;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> arr;

    for (int i = 0; i < n; i++){
        int ai;
        cin >> ai;
        arr.push_back(ai);
    }

    for (int i = 0; i < q; i++){
        char c;
        cin >> c;

        if(c == '+'){
            int l, r, w;
            cin >> l >> r >> w;
            l--;
            r--;

            for(int j = l; j < r + 1; j++){
                arr[j] += w;
            }
        }
        else if(c == '?'){
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            vector<ll>::const_iterator first = arr.begin() + l;
            vector<ll>::const_iterator last = arr.begin() + r + 1;
            vector<ll> newVec(first, last);

            cout << max((ll)0, maxSubArraySum(newVec)) << '\n';
        }
    }
}