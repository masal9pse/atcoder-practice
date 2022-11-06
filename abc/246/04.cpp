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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int x1,y1;
    cin >> x1 >> y1;
    int x2,y2;
    cin >> x2 >> y2;
    int x3,y3;
    cin >> x3 >> y3;
    int x4,y4;
    if (x1 == x2) x4 = x3;
    if (x1 == x3) x4 = x2;
    if (x2 == x3) x4 = x1;

    if (y1 == y2) y4 = y3;
    if (y1 == y3) y4 = y2;
    if (y2 == y3) y4 = y1;
    cout << x4 << " " << y4 << endl;
    return 0;
}