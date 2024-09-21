#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	for(int i=2; i <=sqrt(x); i++){
		if(x % i == 0) return false;
	}
	return x>1;
}

int main(){
	int n; cin >> n;
	int a[n];
	int sum = 0;
	for(int &x : a) {
		cin >> x;
		sum += x;
	}
	
	int sum_left = a[0], sum_right = 0;
	for(int i=1; i<n-1; i++){
		sum_right = sum - sum_left - a[i];
		if(isPrime(sum_left) && isPrime(sum_right)) cout << i << " ";
		sum_left += a[i];
	}
	return 0;
}
