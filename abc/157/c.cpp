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
    vector<vector<int>> a(3, vector<int>(3));
    vector<vector<bool>> bingo(3, vector<bool>(3));
    rep(i, 3) rep(j, 3) cin >> a[i][j];
    int n;
    cin >> n;
    rep(i, n)
    {
        int b;
        cin >> b;
        rep(j, 3) rep(k, 3)
        {
            if (a[j][k] == b)
                bingo[j][k] = true;
        }
    }

    bool ans = false;
    rep(i, 3)
    {
        if (bingo[i][0] && bingo[i][1] && bingo[i][2])
        {
            // 横
            if (bingo[i][0] == bingo[i][1] && bingo[i][1] == bingo[i][2])
                ans = true;
        }

        // 縦
        if (bingo[0][i] && bingo[1][i] && bingo[2][i])
        {
            if (bingo[0][i] == bingo[1][i] && bingo[1][i] == bingo[2][i])
                ans = true;
        }
    }

    if (bingo[0][0] && bingo[1][1] && bingo[2][2] == bingo[1][1] && bingo[1][1] == bingo[2][2])
        ans = true;
    if (bingo[0][2] && bingo[1][1] && bingo[2][0] && bingo[0][2] == bingo[1][1] && bingo[1][1] == bingo[2][0])
        ans = true;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

// n進数へ変更
string convertDigits(int n, int k)
{
    string ans;
    vector<int> d;
    while (n > 0)
    {
        d.push_back(n % k);
        n /= k;
    }
    for (int i = d.size() - 1; i >= 0; i--)
    {
        ans += to_string(d[i]);
    }

    return ans;
}

// 最小公約数
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
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