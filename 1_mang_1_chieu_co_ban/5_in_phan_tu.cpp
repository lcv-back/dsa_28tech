#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	bool valid = false;
	for(int i=0; i<n; i++){
		if(i % 2 == 0 && a[i] % 2 == 0) {
			valid = true;
			cout << a[i] << " ";
		}
	}
	
	if(!valid) cout << "NONE";
	return 0;
}
