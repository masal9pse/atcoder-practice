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
#include <numeric>
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
template <typename T>
bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    a[0] = x, a[1] = y;
    rrep(i, 2, n)
    {
        a[i] = (a[i - 2] + a[i - 1]) % 100;
    }
    cout << a.back() << endl;
    // A[0] = X; A[1] = Y;
    // for (int i = 2; i < N; i++)
    // {
    //     A[i] = (A[i-2] + A[i-1]) % 100;
    // }
    // cout << A[N-1] << endl;
    return 0;
}