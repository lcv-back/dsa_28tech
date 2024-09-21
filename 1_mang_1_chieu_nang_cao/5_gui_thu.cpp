#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n-1]) << endl;
	
	for(int i=1; i<n-1; i++){
		int prev = abs(a[i] - a[i-1]);
		int next = abs(a[i] - a[i+1]);
		
		// minimum
		cout << (prev < next ? prev : next) << " ";
		
		// maximum
		int temp1 = abs(a[i] - a[0]);
		int temp2 = abs(a[i] - a[n-1]);
		
		cout << (temp1 > temp2 ? temp1 : temp2) << endl;
	}
	
	cout << abs(a[n-1] - a[n-2]) << " " << abs(a[n-1] - a[0]) << endl;
	return 0;
}
