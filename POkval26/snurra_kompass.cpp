/*
Status:
---------
Complete: false
Points: 0
*/

#include "bits/stdc++.h"
#include <cstdio>
using namespace std;
using ll = long long;
using ull = unsigned long long;

using p2 = pair<ll, ll>;

#define all(x) begin(x),end(x)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    bool visited[360];

    for (int i = 0; i < 360; i++) {
	visited[i] = false;
    }

    int pos = 0;

    while (true) {
	visited[pos] = true;

	pos += a;
	pos %= 360;

	if (pos == 0) {
	    break;
	}
    }

    for (int i = 0; i < 360; i++) {
	if (visited[i]) {
	    pos = i;

	    while(true){
		visited[pos] = true;

		pos += b;
		pos %= 360;

		if (pos == i){
		    break;
		}
	    }
	}
    }
    
    int count = 0;
    for (int i = 0; i < 360; i++) {
	if(visited[i]) {
	    count++;
	}
    }
    
    cout << count;

    cout << "\n";
}


