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
    string s;
    int k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    while (k > 1)
    {
        next_permutation(s.begin(), s.end());
        k--;
    }
    cout << s << endl; //
    return 0;
}