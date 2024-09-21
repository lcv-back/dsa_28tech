#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int target; cin >> target;
	
	int dem = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j && a[i]+a[j] == target) dem++;
		}
	}
	
	cout << dem/2;
	return 0;
}
