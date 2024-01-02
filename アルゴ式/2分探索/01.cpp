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
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;


int main()
{
     vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
    //  auto c = lower_bound(vec.begin(), vec.end(), 16);
    // -beginだとエラーが出ない、distanceだと出る vecの末尾の要素番号+1になってしまう、ただvector指定で参照外エラーとなる
    int c = lower_bound(vec.begin(), vec.end(), 100) - vec.begin();
    long idx_last = distance(vec.begin(), lower_bound(vec.begin(), vec.end(), 16));

    cout << "vec[" << idx_last << "] = " <<  vec[idx_last] << "\n"; // vec[13] = 0 が出力
    // cout << "vec[" << idx_last << "] = " <<  vec.at(idx_last) << "\n";  範囲外参照でエラー

    return 0;
}