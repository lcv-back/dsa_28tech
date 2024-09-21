#include<bits/stdc++.h>
using namespace std;

int soKoGiam(int n){
	while(n >= 10){
		int r = n % 10;
		int l = n / 10 % 10;
		if(r < l) return 0;
		n /= 10;
	}
	return 1;
}

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second != b.second) return a.second > b.second;
	return a.first > b.first;
}

int main(){
	int n;
	map<int, int> mp;
	vector<pair<int, int>> v;
	while(cin >> n) if(soKoGiam(n)) mp[n]++;
	for(auto it : mp) v.push_back({it.first, it.second});
	sort(v.begin(), v.end(), cmp);
	for(auto it: v) cout << it.first << " " << it.second << endl;
	return 0;
}
