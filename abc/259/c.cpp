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
// using P = pair<int, int>;
using P = pair<char, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

vector<P> rle(const string &s)
{
    vector<P> res;
    for (char c : s)
    {
        if (res.size() > 0 && res.back().first == c)
        {
            res.back().second++;
        }
        else
        {
            res.emplace_back(c, 1);
        }
    }
    return res;
}

bool solve()
{
    string s, t;
    cin >> s >> t;
    vector<P> sv, tv;
    sv = rle(s);
    tv = rle(t);
    if (sv.size() != tv.size())
        return false;
    rep(i, sv.size())
    {
        if (sv[i].first != tv[i].first)
            return false;
        if (sv[i].second > 1 && sv[i].second > 1)
        {
            if (sv[i].second > tv[i].second)
            {
                return false;
            }
        }
        if (sv[i].second == 1)
        {
            if (tv[i].second > 1)
                return false;
        }
    }
    return true;
}

int main()
{
    if (solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}