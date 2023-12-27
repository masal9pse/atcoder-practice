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

int main() {
  int data[] = {1, 3, 5, 7, 9};

  // lower_boundは指定した値以上の先頭の要素を指すイテレータを返す
  auto it = std::lower_bound(data, data + 5, 4);
  std::cout << "lower_bound: " << *it << std::endl; // 5

  // upper_boundは指定した値より大きい先頭の要素を指すイテレータを返す
  it = std::upper_bound(data, data + 5, 5);
  std::cout << "upper_bound: " << *it << std::endl; // 7
  it = std::upper_bound(data, data + 5, 4);
  std::cout << "upper_bound: " << *it << std::endl; // 7

  return 0;
}