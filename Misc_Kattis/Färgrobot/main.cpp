#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string clrs;
    cin >> clrs;

    int i = 0;
    bool r = false, g = false, b = false;
    while(n > 0){
        if(clrs[i] == 'R'){
            r = true;

            if(g && b){
                cout << 'R';
                r = false;
                g = false,
                b = false; 
                n--;
            }
        }
        if(clrs[i] == 'G'){
            g = true;

            if(r && b){
                cout << 'G';
                r = false;
                g = false,
                b = false; 
                n--;
            }
        }
        if(clrs[i] == 'B'){
            b = true;

            if(r && g){
                cout << 'B';
                r = false;
                g = false,
                b = false; 
                n--;
            }
        }

        i++;
    }
}