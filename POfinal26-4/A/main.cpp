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

//BFS for knight jumps
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<vector<bool>> board(n, vector<bool>(n));
    pair<ll, ll> pos;

    for (ll i = 0; i < n; i++){
        string s;
        cin >> s;
        for (ll j = 0; j < n; j++){
            char c = s[j];
            if(c == '#'){
                board[i][j] = false;
            }
            else if(c == 'K'){
                pos = make_pair(i, j);
                board[i][j] = true;
            }
            else{
                board[i][j] = true;
            }
        }
    }

    vector<bool> found(n * n, false);
    queue<pair<ll, ll>> q;
    q.push(make_pair(pos.first * n + pos.second, 0));

    ll result = -1;

    while(!q.empty()){
        ll p = q.front().first;
        ll depth = q.front().second;
        q.pop();

        ll y = p/n;
        ll x = p%n;

        //cout << depth << ": " << y << ", " << x << '\n';
        
        if(p == 0){
            result = depth;
            break;
        }

        if(found[p] || (!board[y][x])){
            continue;
        }

        //cout << "ACCEPTED" << endl;

        pair<ll, ll> a[8] = {
            {y + 2, x + 1},
            {y + 2, x - 1},
            {y - 2, x + 1},
            {y - 2, x - 1},
            {y + 1, x + 2},
            {y + 1, x - 2},
            {y - 1, x + 2},
            {y - 1, x - 2},
        };

        found[y * n + x] = true;

        for(ll i = 0; i < 8; i++){
            if(a[i].first < n && a[i].first > -1 && a[i].second < n && a[i].second > -1){
                q.push(make_pair(a[i].first * n + a[i].second, depth + 1));
            }
        }
    }

    cout << result;
}