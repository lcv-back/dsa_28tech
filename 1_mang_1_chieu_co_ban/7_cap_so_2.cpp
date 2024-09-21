#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	for(int i=0; i<n-1; i++){
		for(int j=1; j<n; j++){
			if(a[i] > a[j]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	int chenh_lech_nho_nhat = 1e9;
	for(int i=0; i<n-1; i++){
		int temp = abs(a[i] - a[i+1]);
		if(chenh_lech_nho_nhat > temp) chenh_lech_nho_nhat = temp;
	}
	
	cout << chenh_lech_nho_nhat;
	return 0;
}
