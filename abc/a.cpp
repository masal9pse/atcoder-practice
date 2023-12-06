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

// 度からラジアンに変換する関数
double degreesToRadians(double degrees)
{
    return (M_PI / 180.0) * degrees;
}

// 点 (a, b) を原点を中心として反時計回りに d 度回転させる関数
void rotatePoint(double a, double b, double d, double &newX, double &newY)
{
    // 度をラジアンに変換
    double radians = degreesToRadians(d);

    // 新しい座標を計算
    newX = a * cos(radians) - b * sin(radians);
    newY = a * sin(radians) + b * cos(radians);
}

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    double newX, newY;
    // 点を回転させる
    rotatePoint(a, b, d, newX, newY);

    // 結果を出力    
    printf("%.10f %.10f\n", newX, newY);
    return 0;
}