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
 
int main()
{
    /*
     setをvectorにつっこんで同じvectorを消し、個数を出力
     問題は、set<vector>で同じvectorが消えるか
    */
    int n;
    cin >> n;
    set<vector<int>> st;
    rep(i,n) {
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j,l) cin >> a[j];
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}