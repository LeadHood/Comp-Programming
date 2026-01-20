#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;

    vector<tuple<ull, ull, ull>> trees;

    for (ull i = 0; i < n; i++){
        ull l, v, t;
        cin >> l >> v >> t;
        trees.push_back(make_tuple(l, v, t));
    }

    ull left = -1;
    ull right = 1e9;

    while (left + 1 < right){
        ull mid = (left + right)/2;
        
        ull sum = 0;
        for (ull i = 0; i < n; i++){
            tuple<ull, ull, ull> tree = trees[i];
            if(mid >= get<2>(tree)){
                sum += get<0>(tree) + get<1>(tree) * get<2>(tree);
            }
            else{
                sum += get<0>(tree) + get<1>(tree) * mid;
            }
        }

        if(sum >= s){
            right = mid;
        }
        else{
            left = mid;
        }
    }

    cout << right;

}