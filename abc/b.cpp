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
    // int h, w;
    // cin >> h >> w;
    // string snuke = "snuke";
    // vector<string> s;
    // rep(i, h) cin >> s[i];
    // vector<int> dx = {1, 0, -1, 1, -1, 0};
    // vector<int> = {1, 1, 1, 0, 0, -1};
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
    string snuke_test = "ekuns";
    // n-1スタートするやり方が分からんな。
    int n = snuke_test.size();
    int d = 1;
    vector<int> dx = {1, -1};
    rep(si, n) rep(v, 2)
    {
        int i = si;
        string str = "";
        rep(j, 5)
        {
            i += dx[v];
            i = (i + n) % n;
            str += snuke_test[i];
        }
        if (str == "snuke")
        {
            rep(j, 5)
            {
                i += dx[v];
                i = (i + n) % n;
                cout << i + 1<< endl;
            }
        }
    }

    return 0;
}