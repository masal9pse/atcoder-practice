#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

// BFSを使用して最小ステップ数で変換するための配列xを求める関数
vector<string> min_steps_to_convert(const string& s, const string& t) {
    int n = s.size();
    if (s == t) {
        return {s};
    }

    queue<pair<string, vector<string>>> q;
    unordered_set<string> visited;
    
    q.push({s, {s}});
    visited.insert(s);

    while (!q.empty()) {
        auto [current, path] = q.front();
        q.pop();
        
        // 文字列currentから文字を1つ変更する全ての可能性を試す
        for (int i = 0; i < n; ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                if (current[i] != c) {
                    string new_state = current;
                    new_state[i] = c;
                    
                    if (new_state == t) {
                        vector<string> result = path;
                        result.push_back(new_state);
                        return result;
                    }

                    if (visited.find(new_state) == visited.end()) {
                        visited.insert(new_state);
                        vector<string> new_path = path;
                        new_path.push_back(new_state);
                        q.push({new_state, new_path});
                    }
                }
            }
        }
    }
    
    // 変換できない場合
    return {};
}

int main() {
    string s, t;
    cin >> s >> t;

    vector<string> result = min_steps_to_convert(s, t);
    
    for (const string& str : result) {
        cout << str << endl;
    }

    return 0;
}
