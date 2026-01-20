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

    int T, M;
    cin >> T >> M;

    int t = 0, m = 0;

    int t1 = T;
    int t2 = M;

    while(t + m < 40){
        if(t + m == 39 && t1 == T && t2 == M){
            break;
        }

        if(t1 == T){
            t1 = 0;
            t++;
        }

        if(t2 == M){
            t2 = 0;
            m++;
        }

        t1++;
        t2++;
    }

    cout << t << " " << m;
}