#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    vector<bool> ogs(n);
    set<string> st;
    rep(i, n) cin >> s[i] >> t[i];
    rep(i, n)
    {
        if (st.count(s[i]) == 0) {
            ogs[i] = true;
        }
        st.insert(s[i]);
    }
    int ans = -1,now = -1;
    rep(i,n) {
        if (now < t[i] && ogs[i] == true) {
            now = t[i];
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}