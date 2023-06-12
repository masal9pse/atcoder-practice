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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

ll convertToNumber(const std::string& input) {
    ll result = 0;
    ll power = 1;

    for (int i = input.length() - 1; i >= 0; --i) {
        char c = input[i];
        ll number = c - 'A' + 1;
        result += number * power;
        power *= 26;
    }

    return result;
}

int main() {
    std::string input;
    // std::cout << "アルファベットを入力してください: ";
    std::cin >> input;

    // 大文字に変換
    for (char& c : input) {
        c = toupper(c);
    }

    ll number = convertToNumber(input);
    // std::cout << "変換結果: " << number << std::endl;
    std::cout << number << std::endl;

    return 0;
}

// int main() {
//     std::string input;
//     std::cout << "アルファベットを入力してください: ";
//     std::cin >> input;

//     // 大文字に変換
//     for (char& c : input) {
//         c = toupper(c);
//     }

//     std::cout << "変換結果: ";
//     for (char c : input) {
//         if (c >= 'A' && c <= 'Z') {
//             int number = c - 'A' + 1;
//             std::cout << number << " ";
//         }
//     }

//     return 0;
// }