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

struct Node {
    int value;
    Node* next;
    Node(int v): value(v),next(nullptr) {} 
};

int main() {
    Node node1(11);
    Node node2(12);
    Node node3(13);
    Node node4(14);
    
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    
    Node* pointer = &node1;
    
    while (pointer != nullptr)
    {
        cout << pointer->value << endl;
        pointer = pointer->next;
    }
    return 0;
}
