#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	for(int i=0; i<=n/2; i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	
	for(int x : a) cout << x << " ";
	return 0;
}
