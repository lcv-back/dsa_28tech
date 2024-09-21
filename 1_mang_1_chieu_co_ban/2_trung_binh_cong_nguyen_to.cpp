#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	if(x < 2) return false;
	
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return false;
	}
	return true;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int dem = 0;
	int sum = 0;
	
	for(int x : a){
		if(isPrime(x)){
			sum += x;
			dem++;
		}
	}
	
	cout << fixed << setprecision(3) << (float)sum/dem;
	return 0;
}
