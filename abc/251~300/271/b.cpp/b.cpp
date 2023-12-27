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
    int n, q;
    cin >> n >> q;
    // vector<int> l(n);
    vector<vector<int>> a_list(n);
    vector<int> ls(n);
    rep(i, n)
    {
        int l;
        cin >> l;
        ls[i] = l;
        rep(j, l)
        {
            int a;
            cin >> a;
            a_list[i].push_back(a);
        }
    }
    vector st(q, vector<int>(2));
    rep(i, q)
    {
        int s, t;
        cin >> s >> t;
        s--;
        t--;
        st[i][0] = s;
        st[i][1] = t;
    }
    rep(i, q)
    {
        cout << a_list[st[i][0]][st[i][1]] << endl;     
    }
    return 0;
}