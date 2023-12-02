#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int h, w;
    cin >> h >> w;
    string t = "snuke";
    vector<string> s;
    rep(i, h) cin >> s[i];

    // 8方向の意味が分かってなかった
    // 位置を固定した上で8方向を指定
    vector<int> di = {-1,-1,0,0,1,1,1,-1};
    vector<int> dj = {0,1,-1,1,-1,0,1,-1};
    
    // vector<int>
    // 一番初めにsnukeがあること
    // 横一列左向きにsnukeがあるときに答えは出力
    // 横一列右向きにsnukeがあるときに答えは出力
    // 横一列にsnukeがあるときに答えは出力
    // 縦一列にsnukeがあるときに答えは出力
    // 斜め一列にsnukeがあるときに答えは出力

    // rep(i,h) {
    //     rep(j,5) {
    //         // １文字ずつ探索していきつつも、snukeであることが分かったらそのインデックスを全て出力するやり方が分からない。
    //         //  最後の文字(snukeなのでe)が出力した時点で、そこからインデックスを戻していけばいけそう
    //         if (j == )
    //     }
    // }

    // string snuke_test = "snukea";
    // string snuke_test = "asnuke";
    // string snuke_test = "aasnuke";
    // 1
    // 2
    // 3
    // 4
    // 5
    // string snuke_test = "ekuns";
    // vector<string> snuke_test = {"snukea", "aaaaaa"};
    // vector<string> snuke_test = {"asnuke", "aaaaaa"};
    // vector<string> snuke_test = {"aekuns", "aaaaaa"};
    // // 5
    // // 4 ~ 1
    // // n-1スタートするやり方が分からんな。
    // // int n = snuke_test.size();
    // int d = 1;
    // vector<int> dx = {1, -1};
    // int h = 2;
    // int w = 6;

    // rep(si, h) rep(sj, w) rep(v, 2)
    // {
    //     // int i = si;
    //     int j = sj;
    //     string str = "";
    //     rep(k, 5)
    //     {
    //         j += dx[v];
    //         j = (j + w) % w;
    //         str += snuke_test[si][j];
    //         int cc = 33;
    //     }
    //     if (str == "snuke")
    //         rep(k, 5)
    //         {
    //             // i = si;                
    //             if (k == 0) {
    //                 j -= 4;
    //             } else {
    //                 j++;
    //             }
    //             // j = sj;
    //             // j = sj;
    //             cout << j << endl;             
    //         }
    //         break;
    //     }
    // }

    // return 0;
}