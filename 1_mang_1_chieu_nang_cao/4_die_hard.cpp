#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n){
	int d[101] = {0};
	for(int i=0; i<n; i++){
		if(a[i] == 25) d[a[i]]++;
		else if(a[i] == 50){
			if(d[25] == 0) return 0;
			d[25]--;
			d[a[i]]++;
		} else { // a[i] = 100
			if(d[25] >= 1 && d[50] >= 1){
				d[25]--;
				d[50]--;
				d[100]++;
			} else if(d[25] >= 3){
				d[25] -= 3;
				d[100]++;
			} else return 0;
		}
	}
	return 1;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;

	if(check(a, n)) cout << "YES";
	else cout << "NO";
	return 0;
}
