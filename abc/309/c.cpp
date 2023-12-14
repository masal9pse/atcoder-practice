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

int main()
{
    /*
      問題文の理解 15m
        1種類目の薬は、6日間毎日3錠摂取する必要あり
        2種類目の薬は、2日間毎日5錠摂取する必要あり
        3種類目の薬は、1日間9錠摂取する必要あり
        4種類目の薬は、4日間2錠摂取する必要あり

        1日目 1,2,3,4種類目全ての薬を摂取する必要がある
        2日目 1,2,4種類目の薬を摂取する必要がある
        3日目 1,4種類目の薬を摂取する必要がある
        4日目 1,4種類目の薬を摂取する必要がある
        5日目 1種類目の薬を摂取する必要がある
        6日目 1種類目の薬を摂取する必要がある
        6日目 もう飲まなくていい

      実装方針決め
        
      実装
    */
    int n;
    cin >> n;

    return 0;
}