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
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i, n) cin >> w[i];
    int ans = -1;
    rep(i, (1 << n))
    {
        int num_number = 0;
        set<char> st;
        rep(j, n)
        {
            if (i & (1 << j))
            {
                num_number++;
                for (auto c : w[j])
                {
                    st.insert(c);
                }
            }
        }
        if (st.size() == 26)
        {
            if (ans == -1)
            {
                ans = num_number;
            }
            else
            {
                ans = min(num_number, ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}