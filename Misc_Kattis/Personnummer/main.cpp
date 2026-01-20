#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string y = "";
    for (int i = 1; i >= 0; i--){
        char c;
        cin >> c;
        y += c;
    }

    string m = "";
    for (int i = 1; i >= 0; i--){
        char c;
        cin >> c;
        m += c;
    }

    string d ="";
    for (int i = 1; i >= 0; i--){
        char c;
        cin >> c;
        d += c;
    }

    char t;
    cin >> t;

    string p ="";
    for (int i = 3; i >= 0; i--){
        char c;
        cin >> c;
        p += c;
    }

    if(t == '-'){
        if(stoi(y) <= 19){
            cout << 20;
        }
        else{
            cout << 19;
        }
    }
    else if(t == '+'){
        if(stoi(y) <= 20){
            cout << 19;
        }
        else{
            cout << 18;
        }
    }

    cout << y << m << d << p;

    
}