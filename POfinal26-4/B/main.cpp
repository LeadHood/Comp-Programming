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

vector<string> result;
int n;

char vocals[5] = {'a', 'e', 'i', 'o', 'u'};
char consonants[5] = {'b', 'c', 'd', 'f', 'g'};

void rec(string s, bool voc){
    if(result.size() == n){
        return;
    }

    if(s.size() == 7){
        result.push_back(s);
        return;
    }

    if(voc){
        for (int i = 0; i < 5; i++){
            s.push_back(consonants[i]);
            rec(s, false);
            s.pop_back();
        }
    }
    else{
        for (int i = 0; i < 5; i++){
            s.push_back(vocals[i]);
            rec(s, true);
            s.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    rec("", false);

    for(auto& x : result){
        cout << x << "\n";
    }

}