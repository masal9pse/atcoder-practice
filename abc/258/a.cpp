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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int k;
    cin >> k;
    int hh = 21;
    int k_hh = k / 60;
    int k_mm = k % 60;
    hh += k_hh;
    cout << to_string(hh) << ":" << ((k_mm < 10) ? "0" + to_string(k_mm) : to_string(k_mm)) << endl;
    return 0;
}