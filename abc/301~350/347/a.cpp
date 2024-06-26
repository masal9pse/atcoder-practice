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

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    set<string> st;
    rep(i,n) {
        int cnt = n-i;
        rep(j,cnt) {
            st.insert(s.substr(i,j+1));
        }
    }
    cout << st.size() << endl;
    return 0;
}