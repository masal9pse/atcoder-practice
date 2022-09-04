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
    string c;
    if (s[6] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[3] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[7] == '1' || s[1] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[4] == '1' || s[0] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[8] == '1' || s[2] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[5] == '1')
        c += 'o';
    else
        c += 'x';
    if (s[9] == '1')
        c += 'o';
    else
        c += 'x';

    if (s[0] == '1')
    {
        cout << "No" << endl;
        return 0;
    }
    rep(i, 7)
    {
        rep(j, i)
        {
            rep(k, j)
            {
                if (c[i] == 'o' && c[j] == 'x')
                {
                    if (c[k] == 'o')
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}