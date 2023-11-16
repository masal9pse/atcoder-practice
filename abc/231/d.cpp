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

class UnionFind
{
private:
    std::vector<int> parent, rank;

public:
    UnionFind(int size)
    {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY)
        {
            if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

    bool isConnected(int x, int y)
    {
        return find(x) == find(y);
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> t;
    rep(i, n) t[i + 1];
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    rep(i, m)
    {
        t[a[i]]++;
        t[b[i]]++;
    }
    for (auto v : t)
    {
        if (v.second >= 3)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    UnionFind uf(n);
    rep(i, m)
    {
        if (uf.isConnected(a[i], b[i]))
        {
            cout << "No" << endl;
            return 0;
        }
        uf.unionSets(a[i], b[i]);
    }
    cout << "Yes" << endl;
    return 0;
}