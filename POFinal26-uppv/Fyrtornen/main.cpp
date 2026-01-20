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

struct UF
{
    int n;
    vector<ll> parent;
    vector<ll> size;

    UF(int n) : n(n), parent(n), size(n, 1)
    {
        for (int i = 0; i < n; i++){
            parent[i] = i;
        }
    }

    int find(int x) { return parent[x] == x ? x : parent[x] = find(parent[x]); }

    void merge(int a, int b)
    {
        a = find(a); b = find(b);
        if (a == b) return;

        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<bool> visited(m);
    vector<pair<p2, int>> nodes(m);

    for (ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;

        nodes[i] = make_pair(make_pair(x, y), i);        
    }

    cout << "Test 1" << endl;

    UF uf(n);

    cout << "Test 2" << endl;


    vector<bool> found(m);

    vector<ll> szs;

    for (int i = 0; i < m; i++){
        ll root = uf.find(i);
        if(!found[root]){
            found[root] = true;
            szs.push_back(uf.size[root]);
        }
    }

    cout << "Test 3" << endl;


    sort(all(szs));
    reverse(all(szs));

    ll ans = 0;
    for (int i = 0; i < min(k, (ll)szs.size()); i++){
        ans += szs[i];
    }

    cout << "Test 4" << endl;


    cout << ans;

    return 0;
}