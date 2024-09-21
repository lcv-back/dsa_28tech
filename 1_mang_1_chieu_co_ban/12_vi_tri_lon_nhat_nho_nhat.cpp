#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int min = INT_MAX, max = INT_MIN, i_max = 0, i_min = 0;
	for(int i=0; i<n; i++){
		if(min >= a[i]) {
			min = a[i];
			i_min = i;	
		}
		if(max < a[i]){
			max = a[i];
			i_max = i;	
		}
	}
	
	cout << i_min << " " << i_max;
	return 0;
}
