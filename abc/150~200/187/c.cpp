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

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    map<string, vector<int>> ms;

    rep(i, n)
    {
        string tmp;
        if (s[i].find("!") != std::string::npos)
        {
            tmp = s[i].substr(1);
            ms[tmp];
        }
        else
        {
            tmp = s[i];
            ms[tmp];
        }

        if (ms[tmp].size() < 2)
        {
            ms[tmp].push_back(0);
            ms[tmp].push_back(0);
        }

        if (s[i].find("!") != std::string::npos)
        {
            ms[tmp][1]++;
        }
        else
        {
            ms[tmp][0]++;
        }
    }

    for (auto s : ms)
    {
        if (s.second[0] >= 1 && s.second[1] >= 1)
        {
            cout << s.first << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}