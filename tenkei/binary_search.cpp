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

