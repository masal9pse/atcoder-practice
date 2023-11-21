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

bool isPalindrome(const std::string& str) {
    // 文字列を小文字に変換
    std::string lowercaseStr;
    for (char ch : str) {
        if (std::isalpha(ch)) {
            lowercaseStr += std::tolower(ch);
        }
    }

    // 回文を判定
    int start = 0;
    int end = lowercaseStr.length() - 1;

    while (start < end) {
        if (lowercaseStr[start] != lowercaseStr[end]) {
            return false; // 回文でない場合
        }
        ++start;
        --end;
    }

    return true; // 回文の場合
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    rep(i,n) {
        rep(j,n) {
            string ss = s.substr(i,j+1);
            if (isPalindrome(ss)) {
                int s_size = ss.size();
                ans = max(ans,s_size);
                int k = 3;
            }
        }
    }
    cout << ans << endl;
    return 0;
}