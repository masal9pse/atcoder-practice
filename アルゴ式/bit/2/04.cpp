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
const double PI = acos(-1);

// 左ビットシフトを 1 回行うと、もとの数を 2 倍することができる。 
int bit2bai(int n) {
    return n >> 1;
}

int main()
{
    int n;
    cin >> n;
    int ans = n * 2;
    cout << ans << endl;
    return 0;
}