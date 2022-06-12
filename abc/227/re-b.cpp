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
    int n;
    cin >> n;
    set<int> st;
    // 4ab
    for (int a = 1; a <= 1000; a++)
    {
        for (int b = 1; b <= 1000; b++)
        {
            int s = 4 * a * b + 3 * a + 3 * b;
            st.insert(s);
        }
    }
    int count = 0;
    rep (i,n) {
        int s;
        cin >> s;
        if (st.count(s) == 0) count ++;
    }
    cout << count << endl;
    return 0;
}