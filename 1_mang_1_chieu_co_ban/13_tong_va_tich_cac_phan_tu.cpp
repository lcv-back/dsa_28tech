#include<bits/stdc++.h>
using namespace std;
const int mo = 1e9 + 7;


int main(){
	int n; cin >> n;
	int a[n];
	long long tong = 0, tich = 1;
	for(int &x: a) {
		cin >> x;
		x = x % mo;
		tong = (tong + x) % mo;
		tich = (tich * x) % mo;	
	}
	
	cout << tong << endl;
	cout << tich << endl;
	return 0;
}
