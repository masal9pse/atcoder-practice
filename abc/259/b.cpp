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

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    double theta = atan2(b, a);
    double r = sqrt(a * a + b * b);
    const double pi = acos(-1);
    theta += d * pi/180;
    double x = cos(theta) * r;
    double y = sin(theta) * r;
    printf("%.10f %.10f\n", x, y);
    return 0;
}