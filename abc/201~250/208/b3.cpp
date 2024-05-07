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

int main()
{
    /**
     * vectorでコインの10進数での料金を管理
     * Pと一番近い値を引いていって、引いた数の回数を出力
     * 問題は一番近い値をどう出すか
     * paidMoney = P <= a[i]
    */
    int p;
    cin >> p;
    // maxのindexは10
    vector<int> a(11,1);
    for (int i = 1; i <= 10; i++)
    {
     for (int j = 1; j <= i; j++)
     {
       a[i] =  a[i]*j;
     }
    }
        
    int count = 0;
    while (p > 0)
    {
        int payM = 0;
        for (int i = 1; i <= 10; i++)
        {
            if (a[i] <= p) payM = a[i];
        }
        p -= payM;
        count++;
    }
    cout << count << endl;
    return 0;
}