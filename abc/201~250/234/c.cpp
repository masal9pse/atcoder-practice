#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
// 奇数回目は最後の数字が2、偶数回目は0になる。
// 0から始めると逆に
int main()
{
    ll k;
    cin >> k;
    // vector<int> a(k);
    // vector<int> a;
    vector<string> s_list(k);
    string ans;
    string temp;
    for (int i = 0; i < k; i++)
    {
        // char temp;
        // string temp;
        if (i == 0) {
            // a[0] = 2;            
            s_list[0] = '2';
            temp = '2';
            int v1=1;
        } else if(i % 2 == 0){
            // temp += '2';
            temp[i-1] = '2';
            // s_list[i].push_back(temp);
            int v2=3;
        } else if (i % 2 != 0) {
            temp += '0';
            // temp[i] = '2';
            // s_list[i].push_back(temp);
            int v3=1;
        }
        if (i == k-1) {
        //   ans = s_list[i];
          ans = temp;
          int v5 = 3;
        }
    }
    cout << ans << endl;   
    // cout << temp << endl;   
}