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
    vector<int> a(n);
    set<int> st;
    rep(i, n)
    {
        int d;
        cin >> d;
        st.insert(d);
    }
    int count = 0;
    int ans = 0;
    int p_temp = 0;
    for (const int &number : st)
    {
        if (count == 0)
        {
            if (n >= number) {
              p_temp = number;
            }
            count++;
        }
        else
        {
            if (p_temp + 1 == number && n >= number)
            {
                p_temp = number;
                count++;
            }
            else
            {
                // 
                ans = count;
                break;                
            }
        }
    }

    decltype(st)::iterator it = st.find(0);

    if(it != st.end()) {
        // ans = 0;
    } else {
        ans = 0;
    }

    cout << ans << endl;
    return 0;
}

// 3
// 2000 1 2
// output 0

// 4
// 2000 0 1 2