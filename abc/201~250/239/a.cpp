#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    double h;
    cin >> h;
    cout << fixed << setprecision(7) << sqrt(h * (12800000 + h)) << endl;
    return 0;
}