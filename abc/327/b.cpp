// 解説AC
// メモ
// 数学的考察が必要
// 全探索だが、どこまでループするかを工夫する必要がある

// 解き方
// 1. 全部試す
// 2**60 == 10**18
// ヒント
// 10の18乗を超えるAのA乗の値を求めて、その中まででループを回すとTLEしない
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ll n;
    cin >> n;
    ll two_calc = 2;
    // ll three_calc = 3;
    rep(x, 60)
    {
        if (x == 0) two_calc = 1;
        else two_calc *= 2;
        if (two_calc <= n)
        {
            ll three_calc = 3;            
            rep(y, 38)
            {
                if (y == 0) three_calc = 1;
                else three_calc *= 3;
                ll sum = two_calc * three_calc;
                if (sum == n) {
                    cout << "Yes" << endl;
                    return 0; 
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}