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
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    rep(i,n) {
        if (a+b == c[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}