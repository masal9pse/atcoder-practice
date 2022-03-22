#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)

// vNumはデバッカーを置いた行だと値更新が反映されないため。
// O(N)だが、Nが2×10**5で、10**8以下なのでわんちゃんいける？
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int temp = 0;
    int humidai_sum = 0;
    rep(i,n) {
        if (i == 0) {
            temp = a[0];
            int v1 = 3;
        } else {
            if (temp > a[i]) {
                humidai_sum += temp - a[i];
               int v2 = 2;
            } else if (temp < a[i]) {
                temp = a[i];
                int v4 = 3;
            }
            int v3 = 1;
        }
    }
    cout << humidai_sum << endl;
}