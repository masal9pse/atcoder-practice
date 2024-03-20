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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

ll c2(ll n) {
    return n*(n-1)/2;
}

int main() {
    // 1. 同じ文字の入れ替え含めた全ての組み合わせはNC2通り all変数
    // 2. 同じ文字の入れ替え数は、同じ文字の個数C2通り コードのsame変数
    // つまり 異なる文字の入れ替え数は、 1 - 2となる
    string s;
    cin >> s;
    int n = s.size();
    ll same = 0;
    map<char,int> cnt;
    for(char c:s) cnt[c]++;
    for(auto p:cnt) {
        int m = p.second;
        same += c2(m); 
    }
    ll all = c2(n);
    ll diff = all - same;
    // 同じ文字しかない時に+1する
    if (same) diff++;
    cout << diff << endl;
    return 0;
}