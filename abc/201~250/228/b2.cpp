#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    // コードの落とし込みできず
    // xを更新する方針で実装
    int n,x;
    cin >> n >> x;
    x--;
    vector<int> a(n);
    rep(i,n) cin >> a[i],a[i]--;
    // do whileを用いて問題を解く
    vector<bool> known(n);
    int i = x;
    do
    {
       known[i] = true;
       i = a[i];
    } while (!known[i]);
    int ans = 0;
    rep(i,n) {
        if (known[i]) ans++;
    }
    cout << ans << endl;

    // 動画解説 xを更新して問題を解く
    // while (!known[x])
    // {
    //     known[x] = true;
    //     x = a[x];
    // }
    // int ans = 0;
    // rep(i,n) {
    //     if (known[i]) ans++;
    // }
    // cout << ans << endl;
    return 0;
}