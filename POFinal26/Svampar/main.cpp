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

    int n;
    cin >> n;
    vector<int> weights(n);
    vector<int> shrooms(n, 0);

    int high = -1;
    for (int i = 0; i < n; i++){
        int w;
        cin >> w;

        high = max(high, w);
        weights[i] = w;
    }

    cout << high << '\n';

    for (int i = 0; i < high; i++){
        for (int j = 0; j < n; j++){
            if(shrooms[j] < weights[j]){
                shrooms[j]++;
                cout << '+' << (j+1) << " ";
            }
            else{
                cout << "p ";
            }
        }
        cout << '\n';
    }

    
}