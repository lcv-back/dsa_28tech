#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n], max = 0, second_max = 0;
	for(int &x : a){
		cin >> x;
		if(max <= x){
			second_max = max;
			max = x;
		} else if(x > second_max){
			second_max = x;
		}
	}
	
	cout << max << " " << second_max;
	
	
	return 0;
}
