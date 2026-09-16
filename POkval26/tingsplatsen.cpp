/*
Status:
---------
Complete: false
Points: 0
*/

#include "bits/stdc++.h"
#include <vector>

using namespace std;
using ll = long long;
using ull = unsigned long long;

using p2 = pair<ll, ll>;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<p2> coords = vector<p2>();

    vector<vector<char>> grid = vector<vector<char>>(n);

    for (int i = 0; i < n; i++) {
	grid[i] = vector<char>(m);
	for (int j = 0; j < m; j++) {
	    char val;
	    cin >> val;
	    if (val == '*') {
		coords.push_back(make_pair(i, j));
	    }
	    grid[i][j] = val;
	}
    }
    
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
	    char val = grid[i][j];

	    if(val == '*') { continue; }
   
	    grid[i][j] = 'X';

	    int dist = 0;
	    for (int k = 0; k < coords.size(); k++) {
		int localDist = abs(coords[k].first - i) + abs(coords[k].second - j);
	//	cout << localDist;
		if (dist == 0) {
		    dist = localDist;
		    continue;
		}
		
		if (localDist != dist) {
		    grid[i][j] = '.';
		    break;
		}
	    }
	}
    }

    for (auto &x : grid) {
	for (auto &y : x) {
	    cout << y;
	}
	cout << '\n';
    }
     
}


