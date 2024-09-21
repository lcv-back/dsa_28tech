#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
		int t = a % b; a = b; b = t;
	}
	return a;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int res = a[0];
	for(int i=1; i<n; i++){
		res = gcd(res, a[i]);
	}
	
	cout << res;
	return 0;
}
