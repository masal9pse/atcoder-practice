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
      グラスgとマグカップmに水がそれぞれ何 ml ずつ入っているか求める
      操作をコードに落とせば解けそう
        - グラスが水で満たされているとき、すなわちグラスにちょうど
        G ml 入っているとき、グラスの水をすべて捨てる。
        - そうでなく、マグカップが空であるとき、マグカップを水で満たす。
        - 上のいずれでもないとき、マグカップが空になるかグラスが水で満たされるまで、マグカップからグラスに水を移す。
      O(K)
      ケース推測
        - 初めg,m
    */
    int k, g, m;
    cin >> k >> g >> m;
    int g_water = 0;
    int m_water = 0;
    rep(i, k)
    {
        // 操作1
        if (g_water == g)
        {
            g_water = 0;
            continue;
        }

        // 操作2
        if (m_water == 0)
        {
            m_water = m;
            continue;
        }

        // 操作3
        // while (0 <= m_water && g_water <= g) // これだと0になった際にもう一度処理が行われてしまう。
        while (0 < m_water && g_water < g)
        {
            m_water--;
            g_water++;
        }
    }
    cout << g_water << " " << m_water << endl;
    return 0;
}