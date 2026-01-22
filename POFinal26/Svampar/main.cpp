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
    vector<stack<char>> shrooms(n);

    int high = -1;
    for (int i = 0; i < n; i++){
        int w;
        cin >> w;

        weights[i] = w;
    }

    int highest = 0;
    for (int i = 0; i < n; i++){
        int w = weights[i];

        while(w > 0){
            if (w % 2 == 1){
                w--;
                shrooms[i].push('+');
            }
            else{
                w /= 2;
                shrooms[i].push('<');
            }

            highest = max(highest, (int)shrooms[i].size());
        }
    }

    cout << highest << '\n';

    for (int i = 0; i < highest; i++){
        for (int j = 0; j < n; j++){
            if(shrooms[j].size()){
                cout << shrooms[j].top() << " " << j + 1 << " ";
                shrooms[j].pop();
            }
            else{
                cout << "p ";
            }
        }

        cout << '\n';
    }
}

