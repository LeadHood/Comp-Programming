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

    int A, B;
    cin >> A >> B;

    if ((A > 21 && B > 21) || (A == B))
    {
	cout << "Jack";
    }
    else if(A > 21 || B > A) 
    {
	cout << "Bertil";
    }
    else if (B > 21 || A > B)
    {
	cout << "Alice";
    }
}

