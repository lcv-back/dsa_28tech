#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
		int t = a%b; a=b; b=t;
	}
	return a;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(gcd(a[i], a[j]) == 1){
				cnt++;
			}
		}
	}
	
	cout << cnt;
	return 0;
}
