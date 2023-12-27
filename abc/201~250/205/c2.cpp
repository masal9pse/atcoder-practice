#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
// >

// 普通にやると計算量が多すぎてlong longでも無理
// こういったケースとか 1000000000 999999999 1000000000

// ただ何乗にするかはa,b同じなので、a,bが正ならば a,bの大小関係で答えが決まる

// a,bが負の場合は、cが偶数であればa,bを正とする
// 奇数であれば、負のまま
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool is_odd = false;
    if (c % 2 != 0) is_odd = true;
    if (a )
}