#include <bits/stdc++.h>

using namespace std;

int cti(char c){
	return (int)(c - 'A' + 1);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;

	string d = "";
	
	int i = 0;
	while(i < s.size()){
		d += s[i];
		i += cti(s[i]);
	}

	cout << d;

	cout << '\n';
	return 0;
}
