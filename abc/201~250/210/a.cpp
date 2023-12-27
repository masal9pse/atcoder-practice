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
// 1 100000 100 1
int main()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    if (n < a)
    {
        cout << n * x << endl;
    }
    else
    {
        int more = n - a;
        cout << a * x + more * y << endl;
        return 0;
    }
}