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
    char p,q;
    cin >> p >> q;
    vector<int> k = {3,1,4,1,5,9};
    vector<char> c = {'A','B','C','D','E','F','G'};
    // k,cのindex番号が絶妙に合わない。
    int n = 7;
    // p -= 'A',q-= 'A';
    int o = p;
    int ll = p;
    int aaaa = q;
    int pi = 0;
    int qi = 0;
    if (p > q) {
        swap(p,q);
    }
    rep(i,n) {
        if (p == c[i]) pi = i;
        if (q == c[i]) qi = i;
    }
    int ans = 0;
    for (int i = pi; i < qi; i++)
    {
        ans += k[i];
    }
    cout << ans << endl;
    return 0;
}

ASCII コードに置き換える操作をすること(p-'A')で定義する変数を減らせる。
https://atcoder.jp/contests/abc305/editorial/6537