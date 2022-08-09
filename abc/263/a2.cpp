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

int main()
{
    set<int> st;
    rep(i, 5)
    {
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }
    int k = st.size();
    if (st.size() == 2)
    {
        cout << "Yes" << endl;        
    }
    else
    {

        cout << "No" << endl;
    }

    return 0;
}