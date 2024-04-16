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
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
using ll = long long;
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

// gptを使用してACした
// 落とし込みができなかったのでとりあえずgptに食わせたらACした
std::set<std::string> getAllSubstrings(const std::string& s) {
    std::set<std::string> substrings;
    int n = s.size();
    
    // Iterate through all substrings
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            std::string substring = s.substr(i, len);
            substrings.insert(substring);
        }
    }
    
    return substrings;
}

int countSubstrings(const std::string& s) {
    std::set<std::string> substrings = getAllSubstrings(s);
    return substrings.size();
}

int main() {
    std::string input;
    // std::cout << "Enter a string: ";
    std::cin >> input;
    
    int result = countSubstrings(input);
    // std::cout << "Number of different substrings: " << result << std::endl;
    std::cout << result << std::endl;
    
    return 0;
}