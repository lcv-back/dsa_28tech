#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (a[0] * a[1] < 0) {
        cout << a[0] << " ";
    }
    
    for (int i = 1; i < n - 1; i++) {
        if ((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0)) {
            cout << a[i] << " ";
        }
    }
    
    if (a[n - 2] * a[n - 1] < 0) {
        cout << a[n - 1];
    }
    
    return 0;
}

