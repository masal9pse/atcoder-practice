#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
const double PI = acos(-1);

int main()
{
  int r;
  cin >> r;
  double ans = (double) 2*r*PI;
  printf("%.4f\n",ans);
  return 0;
}