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

    int c, n;

    while(cin >> c >> n){
        vector<int> weights(n + 1);
        
        vector<vector<int>> dp(n + 1, vector<int>(c + 1, 0));

        for (int i = 1; i <= n; i++){
            
            int weight, val;
            cin >> weight, val;

            for (int j = c; j >= weight; j--){
                
            }
        }
    }
    

}