#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &k : a) cin >> k;
	int x; cin >> x;
	
	int dem_lon = 0, dem_nho = 0;
	
	for(int &i : a){
		if(a[i] < x) dem_nho++;
		else if(a[i] > x) dem_lon++;
	}
	
	cout << dem_nho << endl << dem_lon;
	return 0;
}
