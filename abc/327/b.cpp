// メモ
// 数学的考察が必要
// long long は10の19乗までの整数を保持できます

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
    ll b;
    cin >> b;
    for (int a = 1; a <= 15; a++)
    {
        ll result = a;
        for (int i = 0; i < a-1; i++)
        {
            result *= a;
        }
        if (result == b)
        {
            cout << a << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}