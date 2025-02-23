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
const int MI = 1e8;
const ll MLL = 1e18;

// ノードの定義
// 連結リストの各ノード
struct Node {
    Node* next;  // 次がどのノードを指すか
    string value;  // ノードに付随している値
    Node(const string& value = "") : next(NULL), value(value) { } // nex,valueに初期値を入れている
    // Node(const string& value = "") : nex(NULL) // nex,valueに初期値を入れている
    // Node(const string& value = "");
};

Node* node;

void init() {
    node = new Node();
    node->next = node;
}

void insert(Node* v) {
    v->next = node->next;
    node->next = v;
}

int main() {
    init();
    int q;
    cin >> q;
    rep(i,q) {
        int type;
        cin >> type;
        if (type == 0) {
            string s;
            cin >> s;
            Node* v = new Node(s);
            insert(v);
        } else {
            int k;
            cin >> k;

            Node* v = node;
            rep(i,k) {
                v = v->next;
                if (v == node) break;
                cout << v->value << " ";
            }
        }
        cout << endl;
    }
    return 0;
}