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

class Node {
    public: 
        int value;
        Node* next;

        // コンストラクタ
        Node(int v) : value(v), next(nullptr) {}
};

int main() {
    Node node1(10);
    Node node2(11);
    Node node3(12);
    Node node4(13);
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    
    // node情報をprintで出力
    Node* pointer = &node1;
    while (pointer != nullptr)
    {
        cout << pointer->value << endl;
        pointer = pointer->next;
    }

    // node5をnode1の後に差し込むパターン　これはO(1)
    Node node5(14);
    node1.next = &node5;
    node5.next = &node2;
    return 0;
}
