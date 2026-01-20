#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    vector<int> v;
    vector<int> shift (N, -1);

    for (int i = 0; i < N; i++){
        if(N % 2 == 1 && i == N/2){
            shift[i] = N - 1;
        }
        else if(i < (float)N/2){
            shift[i] = (i)*2;
        }
        else{
            shift[i] = (N - 1 - i) * 2 + 1;
        }
    }

    for (auto& x : shift){
        cout << x << ", ";
    }

    cout << '\n';

    for (int i = 0; i< N; i++){
        int t;
        cin >> t;
        v.push_back(t - 1);
    }

    vector<int> left;
    vector<int> right;

    int c = 0;
    for (int i = 0; i < N; i++){
        left.push_back(c);
        if(i == 0){
            continue;
        }
    }
}