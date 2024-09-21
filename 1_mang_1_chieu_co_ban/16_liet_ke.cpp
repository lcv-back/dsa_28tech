#include<bits/stdc++.h>
using namespace std;

bool ng_to(int x){
	for(int i=2; i<=sqrt(x); i++) if(x % i == 0) return false;
	return x > 1;
}

bool thuan_nghich(int x){
	int a[100] = {0};
	int cnt = 0;
	while(x > 0){
		a[cnt] = x % 10;
		x /= 10;
		cnt++;
	}
	
	for(int i=0; i<=cnt/2; i++){
		if(a[i] != a[cnt-i-1]) return false;
	}
	
	return true;
}

bool ch_phuong(int x){
	int sq = sqrt(x);
	return (sq*sq) == x;
}

bool tong_chu_so_ng_to(int x){
	int sum = 0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	
	return ng_to(sum);
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	int cnt_ng_to, cnt_ch_ph, cnt_tong_chu_so_ng_to, cnt_thuan_nghich;
	cnt_ng_to = cnt_ch_ph = cnt_tong_chu_so_ng_to = cnt_thuan_nghich = 0;
	
	for(int x : a){
		if(ng_to(x)) cnt_ng_to++;
		if(ch_phuong(x)) cnt_ch_ph++;
		if(thuan_nghich(x)) cnt_thuan_nghich++;
		if(tong_chu_so_ng_to(x)) cnt_tong_chu_so_ng_to++;
	}
	
	cout << cnt_ng_to << endl;
	cout << cnt_thuan_nghich << endl;
	cout << cnt_ch_ph << endl;
	cout << cnt_tong_chu_so_ng_to << endl;
	return 0;
}
