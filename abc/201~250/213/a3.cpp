#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

vector<int> compress(vector<int> a) {
  int n = a.size();
  map<int,int> mp;
  rep(i,n) mp[a[i]] = 0;
  int id = 0;
  for(auto& p:mp) p.second = id,id++;
  rep(i,n) a[i] = mp[a[i]];
  return a;
}

int main()
{
    int a,b;
    cin >> a >> b;
    // a xor c = b => c = b xor aになる理由が分からないので解説見る
    /*
    　解説見た
      a xor a = 0になることを利用する。
      よって、両辺にaをxorする
      a xor a xor c = b xor a 
      0 xor c = b xor a
      よって、c = b xor aが成り立つ
    */
    cout << (a^b) << endl;
    return 0;
}