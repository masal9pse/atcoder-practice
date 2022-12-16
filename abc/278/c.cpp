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
#include <queue>
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
    int n, q;
    cin >> n >> q;
    set<P> st;
    // ２次元配列を使うとTLEになる。
    rep(qi, q)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
        {
            st.insert(P(a, b));
        }
        if (t == 2)
            st.erase(P(a, b));
        if (t == 3)
        {
            if (st.count(P(a, b)) && st.count(P(b, a)))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}