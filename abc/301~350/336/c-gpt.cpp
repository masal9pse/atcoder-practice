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

// 良い整数かどうかを判定する関数
bool isGoodNumber(ll num) {
    std::string strNum = std::to_string(num);
    
    // 偶数の数字だけからなるかチェック
    for (char digit : strNum) {
        if (digit != '0' && digit != '2' && digit != '4' && digit != '6' && digit != '8') {
            return false;
        }
    }
    
    return true;
}

// 小さい方からN番目の良い整数を求める関数
ll findGoodNumber(ll n) {
    ll count = 0;
    ll num = 0;
    
    while (count < n) {
        if (isGoodNumber(num)) {
            count++;
        }
        num++;
    }
    
    return num - 1;
}

int main() {
    // 入力を受け取る
    ll N;
    std::cin >> N;

    // N番目の良い整数を求めて出力
    ll result = findGoodNumber(N);
    std::cout << result << std::endl;

    return 0;
}