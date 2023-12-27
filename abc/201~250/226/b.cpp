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
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    set<vector<int>> st;
    rep(i, n)
    {
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j, l)
        {
            cin >> a[j];
        }
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}