#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

vector<char> judge() {

} 

int main()
{
    string s;
    cin >> s;
    string c = "x";
    if (s[6] == '1') c += 'o'; else c += 'x';
    if (s[3] == '1') c += 'o'; else c += 'x';
    if (s[1] == '1' || s[7] == '1') c += 'o'; else c += 'x';
    // if (s[7] == '1' || s[1]) c += 'o'; else c += 'x';
    if (s[0] == '1' || s[4] == '1') c += 'o'; else c += 'x';
    if (s[2] == '1' || s[8] == '1') c += 'o'; else c += 'x';
    if (s[3] == '1') c += 'o'; else c += 'x';
    if (s[5] == '1') c += 'o'; else c += 'x';
    if (s[9] == '1') c += 'o'; else c += 'x';
    int xo = 0;
    for (int i = 0; i+1 < c.size(); i++)
    {
        if (c[i] == 'x' && c[i+1] == 'o') xo++;
    }
    if (s[0] == '0' && xo > 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}