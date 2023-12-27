#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int h,w;
    cin >> h >> w;
    int r,c;
    cin >> r >> c;
    int ans = 4;
    if (h <= r) {
        ans = ans-1;
    }
    if (h <= c) {
        ans = ans-1;
    }
    if (w <= r) {
        ans = ans-1;
    }
    if (w <= c) {
        ans = ans-1;
    }
    cout << ans << endl;
    return 0;
}