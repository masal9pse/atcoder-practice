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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

bool f(int h,int m) {
    int h2 = (h/10) * 10 + (m/10);
    int m2 = (h%10) * 10 + (h%10);
    return h2 <= 23 && m2 <= 59;
}

int main()
{
    int h,m;
    cin >> h >> m;
    while (!f(h,m))
    {
        m++;
        if (m == 60) m = 0,h++;
        if (h == 24) h = 0;
    }
    printf("%d %d",h,m);
    return 0;
}