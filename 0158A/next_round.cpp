#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int i = 0;
    int participants = 0;
    cin >> n >> k;
    vector<int> a(n);
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    for ( int i = 0; i < n; i++ ) {
        if ( a[ i ] >= a[ k-1 ] && a[i] > 0 ) participants++;
    }
    cout << participants << endl;
}