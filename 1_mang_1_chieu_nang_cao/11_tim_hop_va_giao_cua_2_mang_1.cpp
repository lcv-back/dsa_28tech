#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	
	vector<int> giao, hop;
	int i=0, j=0;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			i++; j++;
		} else if(a[i] < b[j]) hop.push_back(a[i++]);
		else hop.push_back(b[j++]);
	}
	
	while(i < n) hop.push_back(a[i++]);
	while(j < m) hop.push_back(b[j++]);
	
	for(int x : giao) cout << x << " ";
	cout << endl;
	for(int x : hop) cout << x << " ";
	return 0;
}
