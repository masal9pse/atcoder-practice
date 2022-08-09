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

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int min_ans = pow(10,8);
    int max_ans = -1;
    int count = 0;
    rep(i, n)
    {
        min_ans = min(min_ans, a[i]);
        max_ans = max(max_ans, a[i]);
        if (min_ans - 1 == i && max_ans - 1 == i)
        {
            count++;
            int k = 3;
        }
    }
    cout << count << endl;
    return 0;
}