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

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    c = lcm(c, d);

    ll result = 0;

    if(a%c != 0){
        a += c - a%c;
    }
    
    if(b % c != 0){
        b -= b%c;
    }

    //cout << a << ", " << b << endl;

    cout << (b - a)/c + 1;

}