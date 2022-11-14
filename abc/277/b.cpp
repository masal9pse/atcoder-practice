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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n)
    {
        const string cs1 = "HDCS";
        const string cs2 = "A23456789TJQK";
        if (cs1.find(s[i][0]) == string::npos)
        {
            cout << "No" << endl;
            return 0;
        }
        if (cs2.find(s[i][1]) == string::npos)
        {
            cout << "No" << endl;
            return 0;
        }
        int size = s[i].size();
        rep(j, i)
        {
            if (s[i] == s[j])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}