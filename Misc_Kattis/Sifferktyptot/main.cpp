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

int result = 0;

void rec(string s, int i){
    if(i == s.size()){
        result++;
        return;
    }

    if(s[i] - '0' != 0){
        rec(s, i + 1);
    }

    if(s[i] - '0' <= 2 && s[i] - '0' != 0 && i < s.size() - 1){
        rec(s, i + 2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    rec(s, 0);

    cout << result;
}