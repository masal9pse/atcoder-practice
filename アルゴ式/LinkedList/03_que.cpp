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
using namespace std;
using ll = long long;
// using P = pair<int, int>;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

struct Node
{
    string value;
    Node *next;
    Node *prev;
    // コンストラクタ
    Node(string v = "") : value(v), next(nullptr), prev(nullptr) {}
};

int main()
{
    // 先頭にnilを入れる。
    Node* nil = new Node();
    nil->next = nil;
    nil->prev = nil;

    int q;
    cin >> q;
    rep(i,q) {
        int type;
        cin >> type;
        if (type == 0) {
            string s;
            cin >> s;
            Node* v = new Node(s);
            // v->next = nil;
            nil->next = v;
            int t = 3;            
        }
    }
    return 0;
}
