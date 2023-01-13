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

int main()
{
    string s;
    cin >> s;
    bool ans = true;
    if (!isupper(s[0]))
    {
        ans = false;
        cout << "No" << endl;
        return 0;
    }

    if (!isupper(s[s.size() - 1]))
    {
        ans = false;
        cout << "No" << endl;
        return 0;
    }

    s.erase(0, 1);
    s.pop_back();
    // s.erase(s.rbegin());
    if (s.size() != 6)
    {
        cout << "No" << endl;
        return 0;
    }
    int a;
    try
    {
        a = stoi(s);
    }
    catch (const std::invalid_argument &e)
    {
        cout << "No" << endl;
        return 0;
    }
    // a = stoi(s);
    if (100000 <= a && a <= 999999)
    {
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}