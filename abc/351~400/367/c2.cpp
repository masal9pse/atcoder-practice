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
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int n,k;
int r[8];
int seq[8];

void solve(int lv){
  if(lv==n){
    int s=0;
    for(int i=0;i<n;i++){ s+=seq[i]; }
    if(s%k==0){
      for(int i=0;i<n;i++){
        if(i){cout << " ";}
        cout << seq[i];
      }cout << "\n";
    }
    return;
  }
  for(int i=1;i<=r[lv];i++){
    seq[lv]=i;
    solve(lv+1);
  }
}
3 2
2 1 3


int main(){
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> r[i];
  }
  solve(0);
  return 0;
}
