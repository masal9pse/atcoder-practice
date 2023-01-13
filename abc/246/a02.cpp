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

int main()
{
    int x1,y1;
    cin >> x1 >> y1;
    int x2,y2;
    cin >> x2 >> y2;
    int x3,y3;
    cin >> x3 >> y3;
    int ans_x,ans_y;
    if (x1 == x2) ans_x = x3;
    else if (x1 == x3) ans_x = x2; 
    else if (x2 == x3) ans_x = x1; 

    if (y1 == y2) ans_y = y3;
    else if (y1 == y3) ans_y = y2; 
    else if (y2 == y3) ans_y = y1;

    cout << ans_x << ' ' << ans_y << endl;
    return 0;
}