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

    ll N;
    cin >> N;
    vector<p2> w;
    double sum = 0;

    for (ll i = 0; i < N; i++){
        double d;
        cin >> d;
        w.push_back(make_pair(d, i + 1));
        sum += d;
    }

    int z;
    cin >> z;

    sort(all(w));

    double s1 = 0;
    double s2 = 0;

    while(w.size()){
        if(s1 <= s2){
            s1 += w.back().first;
            cout << w.back().second << " ";
        }
        else{
            s2 += w.back().first;
        }
        w.pop_back();
    }

}