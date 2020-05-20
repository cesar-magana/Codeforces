#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string helpfulMaths (string s ) {
    string output;
    vector<int> v;
    for (int i = 0; i < s.length(); i += 2) {
        v.push_back( s[ i ] - '0' );
    }

    std::sort( v.begin(), v.end() );
    for (int i = 0; i < v.size() - 1; i ++ ) {
        output += to_string( v[i] );
        output += "+"; 
    }
    output += to_string( v[ v.size()-1 ] );
    return output;
}

int main() {
    string s;
    cin >> s;
    cout << helpfulMaths( s ) << endl;
}