#include<bits/stdc++.h>
using namespace std;

int dA[10000005];
int dB[10000005];

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	
	for(int &x : a){
		cin >> x;
		dA[x]++;
	}
	
	for(int &x : b){
		cin >> x;
		dB[x]++;
	}
	
	vector<int> giao, hop;
	for(int val=0; val < 1e7; val++){
		if(dA[val] && dB[val]) giao.push_back(val);
		if(dA[val] || dB[val]) hop.push_back(val);
	}
	
	for(int x : giao) cout << x << " ";
	cout << endl;
	for(int x : hop) cout << x << " ";
	return 0;
}
