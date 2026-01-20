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

vector<pair<ll, ll>> R;
vector<pair<ll, ll>> G;
vector<pair<ll, ll>> B;

//Helpfunctinos
double dist(pair<ll, ll> a, pair<ll, ll> b){
    ll dx = a.first - b.first;
    ll dy = a.second - b.second;

    return sqrt(dx * dx + dy * dy);
}

double dist0(pair<ll, ll> a){
    ll dx = a.first;
    ll dy = a.second;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++){
        ll x, y;
        char c;
        cin >> x >> y >> c;

        if(c == 'R'){
            R.push_back(make_pair(x, y));
        }
        if(c == 'G'){
            G.push_back(make_pair(x, y));
        }
        if(c == 'B'){
            B.push_back(make_pair(x, y));
        }
    }

    double lowestTotal = DBL_MAX;

    for(auto x : G){
        double lowestR = DBL_MAX;

        for(auto y : R){
            lowestR = min(lowestR, dist0(y) + dist(y, x));
        }

        double lowestB = DBL_MAX;

        for(auto y : B){
            lowestB = min(lowestB, dist0(y) + dist(y, x));
        }

        lowestTotal = min(lowestTotal, lowestR + lowestB);
    }

    for(auto x : R){
        double lowestG = DBL_MAX;

        for(auto y : G){
            lowestG = min(lowestG, dist0(y) + dist(y, x));
        }

        double lowestB = DBL_MAX;

        for(auto y : B){
            lowestB = min(lowestB, dist0(y) + dist(y, x));
        }

        lowestTotal = min(lowestTotal, lowestG + lowestB);
    }

    for(auto x : B){
        double lowestG = DBL_MAX;

        for(auto y : G){
            lowestG = min(lowestG, dist0(y) + dist(y, x));
        }

        double lowestR = DBL_MAX;

        for(auto y : R){
            lowestR = min(lowestR, dist0(y) + dist(y, x));
        }

        lowestTotal = min(lowestTotal, lowestG + lowestR);
    }

    cout << setprecision(15) << lowestTotal;
}