#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int result = a3 + a4;

    if(a3 >= a1){
        a1 = 0;
    }
    else{
        a1 -= a3;
    }

    a3 = 0;
    a4 = 0;

    int sum = a2 * 2 + a1;

    result += ceil((double)sum/4);

    cout << result;
}