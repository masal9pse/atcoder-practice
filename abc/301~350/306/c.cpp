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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    map<int, vector<int>> d;
    rep(i, n * 3)
    {
        int a;
        cin >> a;
        d[a].push_back(i);
    }
    vector<P> f(n);
    for (const auto& v:d)
    {
        auto oo = v.second;
        auto ooo = v.second[1];
        int o = 3;
        cout << ooo + 1 << endl;
    }
    
    cout << endl;
    return 0;
}