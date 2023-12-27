#include <iostream>
#include <vector>
using namespace std;

// 関数のプロトタイプ宣言
int countCombinations(int diceCount, int targetSum);

int main() {
    int diceCount, targetSum;

    // サイコロの数と目標の合計値を入力
    // std::cout << "サイコロの数を入力してください: ";
    std::cin >> diceCount;
    // std::cout << "目標の合計値を入力してください: ";
    std::cin >> targetSum;

    // 組み合わせの数を計算して出力
    int combinations = countCombinations(diceCount, targetSum);
    // std::cout << "サイコロを " << diceCount << " 回振ったとき、目標の合計値 " << targetSum << " になる組み合わせの数は " << combinations << " です。" << std::endl;
    std::cout << combinations << " です。" << std::endl;

    return 0;
}

// 再帰的に組み合わせの数を計算する関数
int countCombinations(int diceCount, int targetSum) {
    // サイコロの数が 0 の場合、合計が 0 なら組み合わせが存在する
    if (diceCount == 0) {
        return (targetSum == 0) ? 1 : 0;
    }

    int combinations = 0;

    // 1 から 6 までの各出目について再帰的に計算
    for (int i = 1; i <= 6; ++i) {
        // 出目 i を選んだ場合、残りのサイコロで合計が targetSum - i になる組み合わせを計算
        combinations += countCombinations(diceCount - 1, targetSum - i);
    }

    return combinations;
}
