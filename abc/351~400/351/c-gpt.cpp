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

bool allHoliday(std::vector<int>& days, int A, int B) {
    int n = days.size();
    int lastDay = A + B;
    
    // Check if there's any working day among the schedule
    for (int i = 0; i < n; ++i) {
        if (days[i] % lastDay > A) {
            return false; // There's a working day among the schedule
        }
    }
    
    return true; // All schedules fall on holidays
}

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    
    std::vector<int> days(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> days[i];
    }
    
    if (allHoliday(days, A, B)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
    
    return 0;
}