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
     
    */
    int k,g,m;
    cin >> k >> g >> m;
    int gv = 0,mv = 0;
    rep(i,k) {
        if (gv == g) gv = 0;
        else if (mv == 0) mv = m;
        else {
            // if (mv + gv > g) {
            //     mv-=g-gv;
            //     gv = g;
            // } else {
            //     gv += mv;
            //     mv = 0;
            // }

            // シミュレーションで求める
            // while (mv != 0 && gv != g)
            // {
            //     mv--;
            //     gv++;
            // }

            // 移す水の量を求める
            int x = min(g-gv,mv);
            gv+=x;
            mv-=x;
        }
    }
    printf("%d %d\n",gv,mv);
    return 0;
}