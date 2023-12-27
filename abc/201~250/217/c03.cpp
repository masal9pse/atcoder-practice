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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vi p(n + 1), q(n + 1);
    rep2(i, n) cin >> p[i];
    rep2(i, n) q[p[i]] = i;
    rep2(i, n) cout << q[i] << endl;
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vi p(n);
//     rep(i,n) cin >> p[i];
//     // mapだと自動的にソートされてしまう。
//     mi mq;
//     rep(i,n) mq[i+1] = p[i];
//     // rep(i,n) mq[p[i]] = i+1;
//     rep(i,n) cout << mq[p[i]] << endl;
//     return 0;
// }