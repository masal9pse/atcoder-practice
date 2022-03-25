#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    set<int> st;
    rep(i,n) {
        int d;
        cin >> d;
        st.insert(d);
    }
    int count = 0;
    for (const int &number : st)
    {
        // cout << number << endl;
        count ++;
    }
    cout << count << endl;
}