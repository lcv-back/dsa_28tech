#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int &k : a) cin >> k;
	
	int ok = 0;
	
	if(x == a[n-1]){
		ok=1;
		a[n-1] = 0;
		n--;
	}
	
	for(int i=0; i<n; i++){
		if(a[i] == x && ok==0){
			for(int j=i; j<n-1; j++){
				a[j] = a[j+1];
			}
			ok=1;
			n--;
		}
	}
	
	if(ok==1) for(int i=0; i<n; i++) cout << a[i] << " ";
	else cout << "NOT FOUND";
	
	return 0;
}
