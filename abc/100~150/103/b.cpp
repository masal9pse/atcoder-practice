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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    // |s|回文やると元に戻るのでそれだけループ回す
    // 回転をシミュレートするときは、stringのsubstrメソッドをうまく使いながらやると良いみたい
    string s,t;
    cin >> s;
    cin >> t;
    int n = s.size();
    rep(i,s.size()) {
        s = s.substr(n-1) + s.substr(0,n-1);
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}