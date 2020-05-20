#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string isDangerous (string s ) {
    char c = 'c';
    int sum = 0;
    for ( int i = 0; i < s.length(); i++ ) {
        if ( s[ i ] == c ) {
            sum++;
            if ( sum == 7 ) return "YES";
            }
        else sum = 1;
        c = s[ i ];
    }   
    return "NO"; 
}

int main() {
    string s;
    cin >> s;
    cout << isDangerous( s ) << endl;
}