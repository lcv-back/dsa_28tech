#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	
	cout << "Original array: " << endl;
	for(int x: a) cout << x << " ";
	cout << endl;
	
	sort(a, a+n+1);
	
	cout << "Sorted array: ";
	for(int x: a) cout << x << " ";
	cout << endl;
	
	int min = INT_MAX;
	int freq = 0;
	for(int i=0; i<n-1; i++) {
		if(min > abs(a[i] - a[i+1])){
			min = abs(a[i] - a[i+1]);
		} if (min == abs(a[i] - a[i+1])){
			freq++;
		}
			
	}
	
	cout << min << " " << freq;
	return 0;
}

