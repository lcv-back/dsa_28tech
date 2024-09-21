#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	
	ll n; cin >> n;
	int i=0;
	ll cnt=0;
	
	while( n != 0){
		cnt += n / tien[i];
		n = n % tien[i];
		i++;
	}
	
	cout << cnt;
	
}
