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
    int x,y;
    cin >> x >> y;
    // 階段を使用するとき
    if (x < y && y - x <= 2 || x > y && x - y <= 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}