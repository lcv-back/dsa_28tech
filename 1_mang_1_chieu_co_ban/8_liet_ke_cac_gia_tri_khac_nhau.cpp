#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int d[1001] = {0};
	for(int i=0; i<n; i++){
		d[a[i]]++;
		if(d[a[i]]==1) cout << a[i] << " ";
	}
	return 0;
}
