#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(x) begin(x),end(x)

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        bool found = false;
        for(int i = 0; i < s.size()/2 + 1; i++){
            if(s[i] != s[s.size() - 1 - i]){
                found = true;
                break;
            }
        }

        return !found;
    }
};