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
const int MI = 10e8
const int MLL = 1e18

struct UnionFind {
    vector<int> par;

    UnionFind() { }
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

// ll型がoverflowするかを判定
// int_128も使えるが環境依存する
bool isOverflowLL(int a,ll all) {
    return MX/all < a;
}

// 座標圧縮 
// input [2,9,7,8,6] output [1,5,3,4,2]
vector<int> compress(vector<int> a) {
    int n = a.size();
    map<int,int> mp;
    rep(i,n) mp[a[i]] = 0;
    int id = 1;
    for (auto& p:mp)
    {
        p.second = id++;
    }
    rep(i,n) a[i] = mp[a[i]];
    return a;
}

// Σの公式
https://rikeilabo.com/sum-formula-of-numerical-sequence
ll f(ll n) {
  return (1+n)*n/2;
}

// 左ビットシフトを 1 回行うと、もとの数を 2 倍することができる。 
int bit2bai(int n) {
    return n >> 1;
}

string ten_to_2(int n) {
    string ans;
    while (n > 0)
    {
        if (n % 2 == 0) ans += "0";
        else ans += "1";
        n /= 2;
        int k = 3;
    }
    return ans;
}

int main()
{
    // int n;    
    // cin >> n;
    string ans = ten_to_2(17);
    cout << ans << endl;
    return 0;
}

// ユークリッド距離

bool is_kaibun(string s) {
    bool ans = false;
    int n = s.size();
    string t;
    for (int i = n-1; i >= 0; i--) t += s[i];
    return s == t;
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
    for (int i = d.size()-1; i >= 0; i--)
    {
        ans += to_string(d[i]);
    }
    
    return ans;
}

// 最小公約数
ll gcd(ll a,ll b) {
    if(b == 0) return a;
    return gcd(b,a%b);
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

/*  約数列挙
    計算量：O(√n)
*/
vector<ll> divisor(ll n)
{
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret.push_back(i);
            if (i * i != n)
                ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}