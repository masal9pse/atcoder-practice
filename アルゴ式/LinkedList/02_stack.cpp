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
    Node(const string& value = "") : next(NULL), value(value) { }
    // Node() : nex(NULL), value(value) { }
};

Node* node;

void init() {
    node = new Node();
    // 再帰的にnextが増えるのがよくわからん。
    node->next = node;
}

void pushHead(Node* v) {
    v->next = node->next;
    node->next = v;
}

// 連結リストの先頭にある文字列を返し、その要素を削除する
string erase() {
    Node* front = node->next;
    if(front == node) {
        // 連結リストが空なら、Error を返す
        return "Error";
    }
    else {
        string ret = front->value;  // 先頭の文字列を返す
        node->next = front->next;  // 先頭を front の次に書き換える
        delete front;   // メモリを開放する 開放しなくても正解になるが7356KB使ってた、開放すると7232KB使ってた

        return ret;
    }
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
            pushHead(v);
        } else {
        }
            cout << erase() << endl;
        cout << endl;
    }
    return 0;
}