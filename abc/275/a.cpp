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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> h(n);
    rep(i,n) {
        cin >> h[i];
    }
    int count = 0;
    rep(i,n) {
        int tmp = ans;
        ans = max(h[i],ans);
        if (tmp != ans) {
            count = i;
        }
    }
    cout << count + 1 << endl;
    return 0;
}