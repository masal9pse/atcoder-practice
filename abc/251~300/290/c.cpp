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
    int n, k;
    cin >> n >> k;
    set<int> st;
    rep(i, n)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    int ans = 0;
    while (st.count(ans)) ans++;
    ans = min(ans,k);
    cout << ans << endl;
    return 0;
}