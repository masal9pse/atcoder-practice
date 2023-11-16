### やれること
昇順の配列から必要な値の要素番号をO(log2N)で取り出せる。

### 処理の流れ
1\. 取り出したい値を決める

2\. 真ん中の要素番号を求める。

3A. 2.の要素番号から取り出した値とが1.の値と同じ場合
- その要素番号を出力する。

3B. 2.の要素番号から取り出した値が1.の値より小さい場合
- 真ん中から左の配列について、2,3を行う

3C. 2.の要素番号から取り出した値が1.の値より大きい場合
- 真ん中から右の配列について、2,3を行う

```cpp

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
    vector<int> a = {1,3,6,7,11,17,20,22};
    // int find_value = 11;
    // int find_value = 6;
    // int find_value = 20;
    int find_value = 17;
    int left = 0;
    int right = a.size();
    while (true)
    {
      int center = (left + right) / 2;
      if (a[center] == find_value) {
        cout << center + 1 << endl;
        return 0;
      } else if (a[center] > find_value) {
        right = center;
      } else if (a[center] < find_value) {
        left = center;
      }
    }
}
// 1. find_valueが11の時　output 5
// 2. find_valueが6の時 output 3
// 3. find_valueが20の時 output 7
// 4. find_valueが17の時 output 6



```