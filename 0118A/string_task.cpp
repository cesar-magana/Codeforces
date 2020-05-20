#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string input, output;
    cin >> input;

    int is_vowel;

    for ( int i = 0; i < input.length(); i++ ) {
        char c = input[ i ];
        is_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' );
        if ( !is_vowel ) {
            output += '.';
            if ( !islower(c) ) output += tolower( c );
            else output += c;
        } else {
            continue;
        }
    }
    cout << output << endl;
}