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
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    /*
    mississippi
    普通にやるとO(QN)でTLE

    かぶっている区間を累積和で求める。O(N)
    1つ目の質問の回答は
    区間の9番目 - 区間の3番目
    play Q times,O(Q)
    so,O(N+Q)
    */
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> d(n);
    rep(i, n)
    {
        if (i == 0)
            continue;
        if (s.at(i) == s.at(i - 1))
            d.at(i) += d.at(i - 1) + 1;
        else
            d.at(i) = d.at(i - 1);
    }

    rep(i, q)
    {
        int l, r;
        cin >> l >> r;
        int ans = d[r - 1] - d[l - 1];
        cout << ans << endl;
    }
    return 0;
}