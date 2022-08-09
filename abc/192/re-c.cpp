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

int g1 (int x) {
    string x_str = to_string(x);
    sort(x_str.rbegin(),x_str.rend());
    return stoi(x_str);
}

int g2 (int x) {
    string x_str = to_string(x);
    sort(x_str.begin(),x_str.end());
    return stoi(x_str);
}

int f(int n) {
    return g1(n) - g2(n);
}

int main()
{
    int n,k;
    cin >> n >> k;
    rep(i,k) n = f(n);
    cout << n << endl;
    return 0;
}