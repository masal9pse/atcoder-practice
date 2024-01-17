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
#include <stack>
#include <queue>
#include <deque>
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template<class T> using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 4方向
// int di[4] = {1, 0, -1, 0};
// int dj[4] = {0, 1, 0, -1};

// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main() {
    int n;
    cin >> n;
    map<ll,ll> mp;
    for (ll i = 0; i <= 10000000; i++)
    {
     mp[i] = i+1;
    }
    
    return 0;
}