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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    set<char> st;
    char tmp = s[0];
    int count = 0;
    // 6
    // aaabaa
    bool same = false;

    rep(i, n)
    {
        auto it = st.find(s[i]);
        if (it != st.end() && !same) {
            count = 0;
            continue;
        }
        // tmp = s[i];
        if (tmp != s[i])
        {
            same = false;
            tmp = s[i];
            count = 0;
            count++;
            mp[s[i]] = count;
            st.insert(s[i]);             
            continue;
        };
        count++;
        mp[s[i]] = count;
        tmp = s[i];
        st.insert(s[i]);
        same = true;
        int k = 4;
    }

    int ans = 0;
    for(auto &v: mp) {
        ans += v.second; 
    }
    cout << ans << endl;
    return 0;
}