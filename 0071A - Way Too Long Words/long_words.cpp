#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string word;
    int length;
    for ( int i = 0; i < n; i++ ) {
        cin >> word;
        length = word.length();
        if ( length > 10 ) {
            cout << word[ 0 ] << length-2 << word[ length -1 ] << endl;
        } else {
            cout << word << endl;
        }
    }
}


