#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll F[100];

void fibonacii(){
	F[0] = 0;
	F[1] = 1;
	for(int i=2; i<93; i++)
		F[i] = F[i-1] + F[i-2];
}

int tim(ll x){
	for(int i=0; i<93; i++)
		if(x == F[i]) return 1;
	return 0;
}

int main(){
	fibonacii();
	int n; cin >> n;
	ll a[n];
	for(ll &x : a) cin >> x;
	
	bool isFound = 0;
	for(ll &x : a){
		if(tim(x)){
			isFound = 1;
			cout << x << " ";
		}
	}
	
	if(!isFound) cout << "NONE";
	
	return 0;
}
