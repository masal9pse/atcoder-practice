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
    int n,p,q;
    cin >> n >> p >> q;
    int min_p = 10e8;
    rep(i,n) {
        int d;
        cin >> d;
        min_p = min(min_p,d);
    }
    if (p < q + min_p) {
        cout << p << endl;
    } else {
        cout << q + min_p;
    }
    return 0;
}