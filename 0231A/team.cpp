#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, a, b, c;
    int total = 0; 
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a >> b >> c;
        if ( a + b + c > 1 ) total++;
    }
    cout << total << endl;
}