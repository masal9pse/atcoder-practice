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
#include <stack>
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

double f(double x) {
    return x*(x*(x+1)+2)+3;
}

int main()
{
    // double d = 1e-4;
    // double d1 = 1e4;
    // double d2 = 10e4;
    double n;
    cin >> n;
    double left = 0,right = 100;
    // while (right-left>10e4)
     while (right-left>1e-4)
    // while (right-left>=0)
    {
        double mid = (left+right)/2;
        if (f(mid)<n) {
            left = mid;
        }else {
            right = mid;
        }
    }
    double ans = left;
    cout << ans << endl;
    return 0;
}