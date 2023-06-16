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
    string s;
    cin >> s;
    rep(i, s.size())
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        } else if (s[i] == '1')
        {
            s[i] = '0';
        }
        int k = 3;
    }
    cout << s << endl;
    return 0;
}