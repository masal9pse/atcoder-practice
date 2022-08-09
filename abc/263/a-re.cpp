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
    vector<int> value(5);
    rep(i, 5) cin >> value[i];
    map<int, int> count;
    for (auto v : value)
    {
        count[v] += 1;
    }

    int max_num = 0;
    int min_num = 14;
    rep(i, 5) max_num = max(max_num, value[i]);
    rep(i, 5) min_num = min(min_num, value[i]);
    int a = count[min_num];
    int b = count[max_num];
    if (a == 3 && b == 2 || a == 2 && b == 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}