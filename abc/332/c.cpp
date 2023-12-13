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
const int MI = 10e8;
// const int MLL = 1e18

int main()
{
    /*
      基本的には無地のTシャツを使う、シャツの状態はvector<bool>で管理
       0 シャツを選択
       1 シャツの状態が使えるものを選ぶ、なければ購入(リストに追加)
       2 
    */
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    // vector<bool> shirts_states;
    vector<pair<int,bool>> shirts_states;
    rep(i,m) {
        // 0は無地、1はロゴ入り
        shirts_states.push_back({0,true});
    }

    int ans = 0;

    rep(i,n) {
        if (s[i] == '0') {
            rep(j,shirts_states.size()) {
                shirts_states[j].second = true;
            }
        }

        if (s[i] == '1') {
            bool flag = false;
            rep(j,shirts_states.size()) {
                // できる限り無地
                if (shirts_states[j].second) {
                  shirts_states[j].second = false;
                  flag = true;
                  break;
                }
            }
            if (!flag) {
                ans++;
                // shirts_states.push_back({1,true});
                shirts_states.push_back({1,false});
            }
        }

        if (s[i] == '2') {
            bool flag = false;
            
            rep(j,shirts_states.size()) {
                if (shirts_states[j].first == 1 && shirts_states[j].second) {
                    shirts_states[j].second = false;
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                ans++;
                shirts_states.push_back({1,false});
                int d = 3;
            }
        }
    }
    cout << ans << endl;
    return 0;
}