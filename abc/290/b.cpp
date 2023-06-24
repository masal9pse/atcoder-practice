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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    rep(i, n)
    {
        if (k <= 0)
        {
            cout << "x";
            continue;
        }
        if (0 < k)
        {
            if (s[i] == 'o')
            {
                cout << "o";
                k--;
            }
            else
            {
                cout << "x";
            }
        }
    }
    cout << endl;
    return 0;
}