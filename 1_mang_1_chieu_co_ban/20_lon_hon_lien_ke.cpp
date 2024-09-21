#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	for(int i=1; i<n-1; i++){
		if(a[i] > a[i-1] && a[i] > a[i+1]) cout << a[i] << " ";
	}
	return 0;
}
