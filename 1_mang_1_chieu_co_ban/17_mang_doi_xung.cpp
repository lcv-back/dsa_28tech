#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	bool ok = true;
	for(int i=0; i<n; i++){
		if(a[i] != a[n-i-1]) ok=false;
	}
	
	if(ok) cout << "YES";
	else cout << "NO";
	return 0;
}
