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

/* 小数点n以下で四捨五入する */
float round_n(float number, double n)
{
    number = number * pow(10, n - 1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number);           //小数点以下を四捨五入する。
    number /= pow(10, n - 1);         // 10の(n-1)乗で割る。
    return number;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double ans = b / a;
    printf("%.3f\n", round_n(ans,4));    
    return 0;
}