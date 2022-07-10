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
    set<P> res;
    int sx, sy;
    cin >> sx >> sy;
    for (int x = -2; x <= 2; x++)
    {
        for (int y = -2; y <= 2; y++)
        {
            if (x * x + y * y != 5)
                continue;
            res.emplace(sy + x, sy + y);
            // res.emplace(x,y);
        }
    }
    return res;
}

int main()
{
    auto as = f();
    auto bs = f();
    return 0;
}