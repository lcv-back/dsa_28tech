#include<bits/stdc++.h>
using namespace std;

int d[10000005] = {0};

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
		d[x]++;
	}
	
	for(int val=0; val <= 1e7; val++)
		if(d[val]) cout << val << " " << d[val] << endl;
		
	cout << endl;	
	for(int i=0; i<n; i++){
		if(d[a[i]]){
			cout << a[i] << " " << d[a[i]] << endl;
			d[a[i]] = 0;
		}
	}

	return 0;
}
