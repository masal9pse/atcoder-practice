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

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    set<pair<int,int>> sp;
    sp.insert(make_pair(0,0));
    rep(i, n)
    {
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;
        if (sp.find(make_pair(x,y)) != sp.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        sp.insert(make_pair(x,y));
    }
    cout << "No" << endl;
    return 0;
}