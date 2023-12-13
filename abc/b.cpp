#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    int p;
    cin >> p;
    vector<int> a(10);
    rep2(i, 10)
    {
        int sum = 1;
        for (int j = i; j >= 1; j--)
        {
            if (j == 0)
                continue;
            sum *= j;
        }
        a[i] = sum;
    }
    int k = 3;
    return 0;
}