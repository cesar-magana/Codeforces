#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int polycarpus ( vector<int> v ) {
    int taxis = 0;

    vector<int> mp(5);
    for ( int i = 0; i < v.size(); i ++ ) {
        mp[ v[i] ]++;
    }

    taxis = mp[4] + mp[3] + mp[2] / 2;
    mp[1] -= mp[3];
    if (mp[2] % 2 == 1)
    {
        taxis += 1;
        mp[1] -= 2;
    }
    if (mp[1] > 0)
    {
        taxis += (mp[1] + 3) / 4;
    }


    return taxis;
}

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for ( int i = 0; i < n; i++ ) cin >> s[i];
    cout << polycarpus( s ) << endl;
}