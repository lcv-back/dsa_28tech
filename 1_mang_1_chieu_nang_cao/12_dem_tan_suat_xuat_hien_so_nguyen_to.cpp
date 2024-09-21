#include<bits/stdc++.h>
using namespace std;

int ng_to(int n){
	for(int i=2; i<=sqrt(n); i++) if(n % i == 0) return 0;
	return n > 1;
}

int main(){
	int n;
	vector<int> v;
	map<int, int> mp;
	
	while(cin >> n){
		if(ng_to(n) == 1){
			mp[n]++;
			if(mp[n] == 1) v.push_back(n);
		}
	}
	
	for(int x : v) cout << x << " " << mp[x] << endl;
	return 0;
}
