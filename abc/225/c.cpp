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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    rep(i, n) rep(j, m) cin >> b[i][j];    
    return 0;
}