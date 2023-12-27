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
    int a,b,d;
    cin >> a >> b >> d;
    double theta = atan2(b,a);
    double r = sqrt(a*a+b*b);
    // theta += (double)d / 180 * PI;
    theta += (double)d * PI / 180;
    double x = cos(theta) * r;
    double y = sin(theta) * r;
    printf("%.10f\n" "%.10f\n", x,y);
    return 0;
}