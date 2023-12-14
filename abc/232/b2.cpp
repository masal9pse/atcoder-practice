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
    string s, t;
    cin >> s;
    cin >> t;
    int n = s.size();
    rep(i, 26)
    {
        string s2 = s;
        rep(j, n)
        {
            // int c = s2[j] + i - (s2[j] - 'a');
            int c = s2[j] + i - (s2[j] - 'a');
            s2[j] = s2[j] + i  - (s2[j] - 'a');
            int k = 3;
        }

        if (s2 == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}