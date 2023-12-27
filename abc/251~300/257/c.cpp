#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <string>
#include <map>
#include <numeric>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> w(n);
    rep(i, n) cin >> w[i];
    vector<bool> rial_flags(n);
    vector<bool> robot_flags(n);
    rep(i, n)
    {
        if (s[i] == '1')
            rial_flags[i] = true;
    }
    int x;
    // int x = accumulate(w.begin(), w.end(), 0) / n;
    bool same = true;
    char temp;
    rep(i, n)
    {
        if (i != 0)
        {
            if (temp != s[i])
            {
                same = false;
                break;
            }
        }
        temp = s[i];
    }
    if (!same) {
        x = accumulate(w.begin(), w.end(), 0) / n;
    } else {
        x = *max_element(w.begin(),w.end()) + 1;        
    }

    rep(i, n)
    {
        if (w[i] >= x)
        {
            robot_flags[i] = true;
        }
    }
    int ans = 0;
    rep(i, n)
    {
        if (rial_flags[i] == robot_flags[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}