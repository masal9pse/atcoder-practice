#include <iostream>
#include <vector>
#include <stdint.h>
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

int main()
{
    int n, m;
    cin >> n >> m;

    UnionFind uni(n);

    bool hasLoop = false;

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        if (uni.root(a) == uni.root(b))
        {
            hasLoop = true;
        }
        if (hasLoop)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        uni.connect(a, b);
    }
}