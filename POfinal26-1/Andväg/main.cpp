#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<int, int*> ponds;

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> filters;
    filters.reserve(M + 1);

    for (int i = 0; i < M; i++) {
        ponds[i] = nullptr;
    }

    for (int i = 0; i < M; i++) {
        int a, b, f;
        cin >> a >> b >> f;

        if ((ponds[a] == nullptr) && (ponds[b] == nullptr)) {
            filters.push_back(f);
            ponds[a] = &(filters[filters.size() - 1]);
            ponds[b] = ponds[a];
        } else if (ponds[a] == ponds[b]) {
            *(ponds[a]) |= f;
        } else if (ponds[b] == nullptr) {
            ponds[b] = ponds[a];
            *(ponds[a]) |= f;
        } else if (ponds[a] == nullptr) {
            ponds[a] = ponds[b];
            *(ponds[b]) |= f;
        } else {
        }
    }

    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        if (ponds[A] == ponds[B]) {
            cout << __builtin_popcount(*(ponds[A])) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
