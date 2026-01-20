#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int sz = s.size()/2;

    int b = 0;

    for(int i = 0; i < sz; i++){
        if(s[i] == 'B'){
            b++;
        }
    }

    int bM = b;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            b--;
        }
        
        int j = (i + sz)%s.size();

        if(s[j] == 'B'){
            b++;
        }

        bM = max(b, bM);
    }

    cout << bM;
}