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

int func(int a, int b, int c, int x)
{
    int result = 0;
    int time = x / (a + c);
    int amari = x % (a + c);
    int s = a * time;
    // 走る時間をまとめて求めるのができていなかった。
    if (amari < a) {
        s += amari;
    } else {
        s += a;
    }
    result = s * b;    
    // 個別に走る距離を求めようとしていた
    // result = a * b * time;
    // x -= (a + c) * time;
    // if (amari < a) {
    //     result += amari * b;
    //     int t = 3;
    // } else if (a <= amari) {
    //     result += a * b;
    // }
    return result;
}

int main()
{
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = func(a, b, c, x);
    int aoki = func(d, e, f, x);
    if (aoki < takahashi) {
        cout << "Takahashi" << endl;
    } else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}