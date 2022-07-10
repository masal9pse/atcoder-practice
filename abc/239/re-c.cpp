#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

set<P> f()
{
    int sx, sy;
    cin >> sx >> sy;
    set<P> res;
    for (int x = -2; x <= 2; x++)
    {
        for (int y = -2; y <= 2; y++)
        {
            double c = sqrt((pow(sx - (sx + x), 2)) + (pow(sy - (sy + y), 2)));
            if (c == sqrt(5))
            {
                res.emplace(sx + x, sy + y);
            }
        }
    }
    return res;
}

int main()
{
    auto a = f();
    auto b = f();
    for (auto t:b) 
    {
        if (a.count(t)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}