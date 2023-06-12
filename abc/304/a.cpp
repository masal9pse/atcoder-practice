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
    vector<pair<int, string>> p;
    rep(i, n)
    {
        string s;
        int b;
        cin >> s;
        cin >> b;
        p.emplace_back(b, s);
    }
    P tmp;
    rep(i, n)
    {
        if (tmp.first == 0)
        {
            tmp.first = p[i].first;
            tmp.second = i;
        }
        else if (p[i].first <= tmp.first)
        {
            tmp.first = min(p[i].first, tmp.first);
            tmp.second = i;
        }
    }
    for (int i = tmp.second; i < n; i++)
    {
        cout << p[i].second << endl;
    }
    rep(i,tmp.second) {
        cout << p[i].second << endl;
    }
    return 0;
}