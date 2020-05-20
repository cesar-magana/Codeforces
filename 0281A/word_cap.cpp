#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;


int main() {
    string str;
    cin >> str;
    str[0] = toupper(str[0]);
    cout << str << endl;
}