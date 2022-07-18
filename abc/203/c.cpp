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
#define rep2(i, n) for (int i = 0; i <= n; i++)

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<pair<ll, int>> f(n);
    rep(i, n) cin >> f[i].first >> f[i].second;
    sort(f.begin(), f.end());
    int j = 0;
    rep(i, n)
    {
        if (f[i].first > k)
            break;
        k += f[i].second;
    }
    cout << k << endl;
    return 0;
}

// 隣接する文字列が２文字以上の部分を１文字にする。
string getNearStrOne(string s, int n)
{
    vector<char> s_list;
    char temp;
    rep(i, n)
    {
        if (temp != s[i])
        {
            s_list.push_back(s[i]);
            temp = s[i];
        }
    }
    string ans;
    rep(i, s_list.size())
    {
        ans += s_list[i];
    }
    return ans;
}

// vectorの中で該当の要素と最も違い値が0の要素番号を求める。
int getNearIndex(vector<int> d, int x)
{
    P ans(99999, -1);
    rep(i, 102)
    {
        if (d[i] == 1)
            continue;
        int dif = abs(x - i);
        // pairの比較の場合、まずはfirstからminのチェックが入り、もしfirstがminの第１引数と同じであればsecondで比較される。
        ans = min(ans, P(dif, i));
        int k = 3;
    }
    return ans.second;
}

// ランレングス圧縮
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

vector<int> getNextSumList(vector<int> a, int n)
{
    int sum = 0;
    vector<int> b(n);
    rep(i, n)
    {
        sum += a[i];
        b[i] += sum;
    }
    return b;
}

// 隣り合う要素を引き算する。
vector<int> getNextSubList(vector<int> a, int n)
{
    vector<int> b;
    rep(i, n + 1)
    {
        if (i != n + 1)
        {
            int sub = a[i + 1] - a[i];
            b.push_back(sub);
        }
    }
    return b;
}