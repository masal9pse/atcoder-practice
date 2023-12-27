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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    rep(i, k) cin >> a[i];    
    rep(i, q)
    {
        int l;
        cin >> l;
        l--;
        // 1. となりの数を比較して、+1して同じであれば+1しない
        if (a[l] == n)
            continue;
        if (a[l] + 1 == a[l + 1])
            continue;
        a[l]++;
        // 2. a[i]がn以上であればやめる。
    }
    rep(i, k) cout << a[i] << endl;
    return 0;
}