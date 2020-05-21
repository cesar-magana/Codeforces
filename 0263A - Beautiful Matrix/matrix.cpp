#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int beautiful ( vector<vector<int> > m, int x, int y ) {
    return std::abs(x-2) + std::abs(y-2);
}

int main() {
    vector<vector<int> > m(5, vector<int>(5));
    int x, y;
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            cin >> m[ i ][ j ];
            if ( m[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << beautiful( m, x, y ) << endl;
}