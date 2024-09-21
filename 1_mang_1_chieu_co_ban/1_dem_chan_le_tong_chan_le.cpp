#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int dem_chan = 0, dem_le = 0;
	int tong_chan = 0, tong_le = 0;
	
	int a[1001] = {0};
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			dem_chan++;
			tong_chan += a[i];
		} else {
			dem_le++;
			tong_le += a[i];
		}
	}
	
	cout << dem_chan << endl;
	cout << dem_le << endl;
	cout << tong_chan << endl;
	cout << tong_le << endl << endl;
	
	
	return 0;
}
