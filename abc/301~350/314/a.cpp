// 小数には誤差がつきものなので文字列で考える
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

int main()
{
    string n;
    cin >> n;
    double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    
    // フォーマットされた文字列を作成
    string formatted_pi = "%." + n + "f";
    
    // printfではなく、直接文字列を出力
    printf(formatted_pi.c_str(), pi);
    
    return 0;
}
