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
const ll MLL = 1e18;

int main()
{
    /*
      途中で別の問題にいく場合は、終わったものファイルにrpdのいずれかをつける。
      問題文の理解 r 13m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め p 15m
        1. 
          @の判定
            atcoderをリストに入れて判定
          並び替えの判定
            mapを使って、使用文字の個数を調べる。
            下記2点が同じであれば行けそうやな
              - s,tのatcoderの+ @の合計文字数が同じあること
              - その他の文字数が同じであること
      実装 d
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    string s,t;
    cin >> s;
    cin >> t;

    return 0;
}