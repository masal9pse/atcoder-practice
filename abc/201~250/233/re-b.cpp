#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;
    string min_s, max_s;
    min_s = s;
    max_s = s;
    int n = s.size();
    rep(i, n)
    {
        min_s = min(min_s, s);
        max_s = max(max_s, s);
        s = s[n - 1] + s;
        s.erase(--s.end());
        int k = 3;
    }
    cout << min_s << endl;
    cout << max_s << endl;
    return 0;
}