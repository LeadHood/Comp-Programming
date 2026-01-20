#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int count = 0;

    while (N > 0)
    {
        int number = 1;

        while (true)
        {
            if (number <= N)
            {
                number *= 10;
                number++;
            }
            else
            {
                count++;
                N -= (number - 1) / 10;
                break;
            }
        }
    }

    cout << count;
}