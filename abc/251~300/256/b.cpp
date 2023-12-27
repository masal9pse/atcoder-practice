#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> koma;
    rep(i, n) cin >> a[i];
    int count_ans = 0;
    rep(i, n)
    {
        koma.push_back(0);
        int koma_size = koma.size();
        rep(j, koma_size)
        {
            if (koma[j] < 4)
            {
                koma[j] += a[i];
                if (koma[j] >= 4)
                {
                    count_ans++;
                }
            }
        }
    }
    cout << count_ans << endl;
    return 0;
}