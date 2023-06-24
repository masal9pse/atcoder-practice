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
    vector<int> a = {1, 3, 6, 7, 11, 17, 20, 22};
    int find_value = 6;
    // int center = max / 2;
    int left = 0;
    int right = a.size();
    int center = (left + right) / 2;
    while (true)
    {
        center = (left + right) / 2;
        if (find_value == a[center])
        {
            cout << center + 1 << endl;
            return 0;
        }
        if (find_value < a[center])
        {
            left = (left + center) / 2;
            if (find_value == a[left])
            {
                cout << left + 1 << endl;
                return 0;
            }
        }
        else
        {
            right = (center + right) / 2;
        }
    }
    return 0;
}