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
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    vector<int> l_list(n);
    rep(i, n)
    {
        int l;
        cin >> l;
        l_list[i] = l;
        rep(j, l)
        {
            int aj;
            cin >> aj;
            a[i].push_back(aj);
            int a = 3;
        }
    }
    int ans = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            bool flag = false;
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    flag = true;
                }
            }
            if (!flag)
                ans++;
        }
        cout << ans << endl;
        return 0;
    }
    return 0;
}