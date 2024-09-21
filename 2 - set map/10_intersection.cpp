#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n];
	int b[m];
	set<int> sB;
	
	for(int &x : a) cin >> x;
	
	for(int &x : b){
		cin >> x;
		sB.insert(x);
	}

	for(int i : a){
		if(sB.count(i)){
			cout << i << " ";
			sB.erase(i);
		}
	}	
	return 0;
}
