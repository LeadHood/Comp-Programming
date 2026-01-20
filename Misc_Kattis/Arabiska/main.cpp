#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    set<char> vocals = {'a', 'e', 'i', 'o', 'u', 'y'};

    int n;
    cin >> n;

    vector<string> sentence;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;

        string res = "";

        for (int j = 0; j < s.size(); j++){
            if(j == s.size() - 1 || j == s.size() - 2 || !vocals.count(s[j]) || vocals.count(s[j+1]) || vocals.count(s[j+2])){
                res+=s[j];
            }
        }
        
        sentence.push_back(res);
    }

    for (auto& x : sentence){
        reverse(x.begin(), x.end());
    }

    reverse(sentence.begin(), sentence.end());

    for (auto& x : sentence){
        cout << x << " ";
    }
}