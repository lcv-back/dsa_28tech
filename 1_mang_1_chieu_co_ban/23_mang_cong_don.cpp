#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], f[n];
	for(int &x: a) cin >> x;
	
	f[0] = a[0]; 
	for(int i=1; i<n; i++) f[i]=f[i-1] + a[i];
	
	for(int &x : f) cout << x << " ";
    
    return 0;
}

