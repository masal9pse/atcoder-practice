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
const int MI = 10e8 const int MLL = 1e18
// 8方向 baseに置いてたけど、グリッドの問題しか使わんから消した
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

void grid_judge(int x,int y) {
    // 上
    if (x > 0) 
    // 下
    if (x < h) 
    // 左
    if (y > 0) 
    // 右
    if (y < w) 
}

struct UnionFind
{
    vector<int> par;

    UnionFind() {}
    UnionFind(int n) : par(n, -1) {}
    void init(int n) { par.assign(n, -1); }

    // 根を求める
    int root(int x)
    {
        if (par[x] < 0)
            return x;
        else
            return par[x] = root(par[x]);
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool merge(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (par[x] > par[y])
            swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    // x を含む根付き木のサイズを求める
    int size(int x)
    {
        return -par[root(x)];
    }
};

// 他も使わんから消した。
// 座標圧縮