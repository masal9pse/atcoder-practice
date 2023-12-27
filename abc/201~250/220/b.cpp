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

ll f(string s,ll k){ // K 進法表記の S を、10 進法表記で表す関数
     ll ans=0;
     for(char x:s){
         ans *= k;
         ans += x - '0';
     }
     return ans;
}

int main()
{
    ll k;
    string a,b;
    cin >> k;
    cin >> a >> b;
    ll a_ans = f (a,k);
    ll b_ans = f (b,k);
    cout << a_ans * b_ans << endl;
    return 0;
}