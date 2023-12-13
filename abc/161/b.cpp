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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    /*
      組み合わせ数は nCm
      これをどうやってコードに落とし込もうか
      これもO(NM)でやりテストケースで例えると、
      1個目が5、2個目が1の際対処ができない。

      全探索なら
    */
    int x,y,z;
    cin >> x >> y >> z;
    swap(x,y);
    swap(x,z);
    printf("%d %d %d",x,y,z);
    return 0;
}