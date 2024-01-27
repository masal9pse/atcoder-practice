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
const double PI = acos(-1);

int main()
{
    string n;
    cin >> n;
    int size = n.size();
    int ans = 20;
    rep(bit, (1 << size))
    {
        int count = 0;
        string n_tmp = "";
        rep(i, size)
        {
            if (bit & (1 << i))
                n_tmp += n[i];
            else
                count++;
        }
        if (n_tmp == "") 
            continue;
        if (stoi(n_tmp) % 3 == 0)
            ans = min(ans, count);
    }
    if (ans == 20) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}