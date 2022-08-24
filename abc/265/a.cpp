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
const double PI = acos(-1);

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int n2 = n;
    int y2 = y;
    int nowN = 0;
    int ans_money = 0;
    if (3 * x > y)
    {
        int y_count = n / 3;
        int x_count = n % 3;
        rep(i, y_count)
        {
            ans_money += y;
        }
        rep(i, x_count)
        {
            ans_money += x;
        }
    }
    else
    {
        ans_money += x * n;
    }
    cout << ans_money << endl;
    return 0;
}