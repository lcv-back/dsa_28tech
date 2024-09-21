#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int max_old = -1e9;
	for(int x : a){
		if(x > max_old){
			cout << x << " ";
			max_old = x;
		}
	}
	return 0;
}
