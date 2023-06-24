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
    int n,x;
    cin >> n >> x;
    int ans = 0;
    rep(i,n) {
        int a;
        cin >> a;
        if ((i + 1) % 2 == 0) {
            a--;
        }
        ans += a;
    }
    if (ans <= x) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}