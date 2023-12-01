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
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<string> d = {a, b, c};
    int index = 0;
    while (true)
    {
        char t = d[index][0];
        if (d[index].find(t) != string::npos)
        {
            d[index] = d[index].substr(1);
            index = t - 'a';
        }
        else
        {
            char ans = index + 'A';
            cout << ans << endl;
            // cout << index << endl;
            return 0;
        }
        int c = 2;
    }

    return 0;
}