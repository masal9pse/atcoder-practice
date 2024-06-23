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
const int MI = 1e9+1;
const ll MLL = 1e18;

// カードを表す構造体
struct Card {
    int strength;
    int cost;
    int index;
};

// 比較関数（強さの降順、強さが同じ場合はコストの昇順）
bool compareCards(const Card &a, const Card &b) {
    if (a.strength == b.strength)
        return a.cost < b.cost;
    return a.strength > b.strength;
}

int main() {
    int N;
    // cout << "カードの枚数を入力してください: ";
    cin >> N;
    
    vector<Card> cards(N);
    
    // cout << "カードの強さとコストを入力してください:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> cards[i].strength >> cards[i].cost;
        cards[i].index = i;
    }
    
    // カードを強さの降順（強さが同じ場合はコストの昇順）にソート
    sort(cards.begin(), cards.end(), compareCards);
    
    vector<Card> result;
    
    // コストの最小値を更新しながらカードを残す
    int minCost = MI;
    for (const auto &card : cards) {
        if (card.cost < minCost) {
            result.push_back(card);
            minCost = card.cost;
        }
    }
    
    // 結果の出力
    // cout << "捨てられなかったカードは以下の通りです:" << endl;
    cout << result.size() << endl;
    vector<int> ans;
    
    for (const auto &card : result) {
        // cout << "強さ: " << card.strength << ", コスト: " << card.cost << endl;
        // cout << card.strength << card.cost << card.index << endl;
        ans.push_back(card.index);
    }
    sort(all(ans));
    for(int a:ans) cout << a+1 << " ";
    cout << endl;
    return 0;
}
