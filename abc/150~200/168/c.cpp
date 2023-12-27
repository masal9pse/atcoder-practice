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
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    double tm = (double)m / 60 * 2 * PI;
    double th = (double)(60 * h + m) / 720 * 2 * PI;
    double c = abs(tm - th);
    double ans = sqrt((double)a * a + b * b - 2 * a * b * cos(c));
    printf("%.10f\n", );
    return 0;
}