#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int size_le = 0, size_chan = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) size_chan++;
        else size_le++;
    }

    int le[size_le], chan[size_chan];
    int idx_le = 0, idx_chan = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            chan[idx_chan++] = a[i];
        } else {
            le[idx_le++] = a[i];
        }
    }

    sort(le, le + size_le, greater<int>()); 
    sort(chan, chan + size_chan); 
    
    // Merging the sorted arrays back into 'a'
    int idx = 0;
    for(int i=0; i<size_le; i++){
    	a[idx++] = le[i];
	}
	for(int i=0; i<size_chan; i++){
		a[idx++] = chan[i];
	}

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

