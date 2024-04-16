#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minRewrites(string S, string T) {
    int s_length = S.length();
    int t_length = T.length();
    int min_rewrites = s_length; // Initialize with maximum possible rewrites
    
    // Iterate over all possible starting positions in S
    for (int i = 0; i <= s_length - t_length; ++i) {
        int rewrites = 0;
        // Check if T matches with S starting from position i
        for (int j = 0; j < t_length; ++j) {
            if (S[i + j] != T[j]) {
                rewrites++; // Increment rewrite count if characters don't match
            }
        }
        min_rewrites = min(min_rewrites, rewrites); // Update minimum rewrites
    }
    return min_rewrites;
}

int main() {
    string S, T;
    cin >> S >> T;
    int result = minRewrites(S, T);
    cout << result << endl;
    return 0;
}
