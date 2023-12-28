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
    int n;
    cin >> n;
    while (true)
    {
    //  int d = n;
    // 1行目を取り除く
     int k1 = n / 10;
     int k2 = k1 / 10;
     // １行目を取得する
     int k3 = k1 % 10;
     int k4 = n % 10;
     int cod = 2;
     if (k2 * k3 == k4) {
      cout << n << endl;
      return 0;
     }
     n++;
    }
    return 0;
}