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
    cout << 10e2 << endl;
    if (n <= (10e2) - 1)
    {
        cout << n << endl;
    }
    else if (10e2 <= n && n <= 10e3 - 1)
    {
        cout << n - (n % 10) << endl;
    }
    else if (10e3 <= n && n <= 10e4 - 1)
    {
        cout << n - (n % 100) << endl;
    }
    else if (10e4 <= n && n <= 10e5 - 1)
    {
        cout << n - (n % 1000) << endl;
    }
    else if (10e5 <= n && n <= 10e6 - 1)
    {
        cout << n - (n % 10000) << endl;
    }
    else if (10e6 <= n && n <= 10e7 - 1)
    {
        cout << n - (n % 100000) << endl;
    }
    else if (10e7 <= n && n <= 10e8 - 1)
    {
        cout << n - (n % 1000000) << endl;
    }

    return 0;
}