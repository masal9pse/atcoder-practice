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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

bool f(int a, int b, int y)
{
    if (a < b) {
        swap(y,z);
    }
    return y < x && z < y;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (f(0, z, y))
    {
        cout << -1 << endl;
        return 0;
    } else {
        
    }
    return 0;
}