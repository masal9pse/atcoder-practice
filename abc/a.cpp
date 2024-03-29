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
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << x << endl;
    }
    else
    {
        if (y < x)
        {
            swap(x, y);
        }
        if (x == 0 && y == 1)
        {
            cout << 2 << endl;
        }
        else if (x == 0 && y == 2) {
            cout << 1 << endl;
        }
        else if (x == 1 && y == 2) {
            cout << 0 << endl;
        }
    }
    return 0;
}