#include <iostream>
#include <string>

using namespace std;

string is_extension_abc(const string& s) {
    // 文字列 S の長さ
    int n = s.length();

    // 文字列 S の先頭から順に A、B、C の連続する部分文字列を見つける
    string s_a = "", s_b = "", s_c = "";

    // S_A の検索
    int i = 0;
    while (i < n && s[i] == 'A') {
        s_a += 'A';
        i++;
    }

    // S_B の検索
    while (i < n && s[i] == 'B') {
        s_b += 'B';
        i++;
    }

    // S_C の検索
    while (i < n && s[i] == 'C') {
        s_c += 'C';
        i++;
    }

    // S_A、S_B、S_C が存在し、S_A + S_B + S_C が元の文字列 S と等しいかを判定
    if (!s_a.empty() && !s_b.empty() && !s_c.empty() && s_a + s_b + s_c == s) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    // 入力を受け取る
    string s;
    cin >> s;
    // 文字列Aの時に落ちる、gptはゴミ
    // 判定結果を出力
    string result = is_extension_abc(s);
    cout << result << endl;

    return 0;
}
