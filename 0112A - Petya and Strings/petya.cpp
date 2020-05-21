#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int compare (string s1, string s2) {
    for ( int i = 0; i < s1.length(); i++ ) {
        s1[ i ] = tolower (s1[ i ] );
        s2[ i ] = tolower (s2[ i ] );
        if( s1[ i ] > s2[ i ] ) return 1;
        if ( s1[ i ] < s2[ i ] ) return -1;
    }   
    return 0; 
}

int main() {
    string s1, s2;
    cin >> s1 >> s2 ;
    cout << compare( s1, s2 ) << endl;
}