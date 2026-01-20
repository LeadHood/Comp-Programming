#include "bits/stdc++.h"
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<double> lower;
    for (int i = 0; i < n; i++){
        int v, p;
        cin >> v >> p;
        lower.push_back((double)(p - 5)/v);
    }
    int vol;
    cin >> vol;
    cout << round(((vol * *max_element(lower.begin(), lower.end()))/10)) * 10;
}