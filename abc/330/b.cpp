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

set<int> getOneList(int n)
{
    // vector<int> a;
    set<int> a;
    // 0になったらfalseになる。
    while (n)
    {
        // a.push_back(n%10);
        a.insert(n % 10);
        n /= 10;
    }
    return a;
}

bool isZorome(int month, int day)
{
    set<int> month_list = getOneList(month);
    set<int> day_list = getOneList(day);
    if (month_list.size() == 1 && day_list.size() == 1)
    {
        for (auto v : month_list)
        {
            for (auto a : day_list)
            {
                if (v == a) return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int d;
        cin >> d;
        for (int j = 1; j <= d; j++)
        {
            if(isZorome(i, j)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}