#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, k;
	cin >> n >> x >> k;
	int a[n];
	for(int &x : a) cin >> x;
	
	if(k > n-1) a[n] = x;
	
	for(int i=n; i >= k; i--){
		a[i] = a[i-1];
	}
	a[k-1] = x;
	
	for(int i=0; i<=n; i++) cout << a[i] << " "; 
	
	return 0;
}
