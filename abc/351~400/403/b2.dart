import 'dart:io';

void main() {
  final s = stdin.readLineSync()!;
  final t = stdin.readLineSync()!;

  final upperCase = RegExp('[A-Z]');

  // 1文字目以外のインデックスでチェック
  final checks = List.generate(s.length - 1, (i) => i + 1).map((i) {
    if (upperCase.hasMatch(s[i])) {
      final prev = s[i - 1];
      return t.split('').any((c) => c == prev);
    }
    return true;
  });

  final result = checks.every((e) => e);

  print(result ? 'Yes' : 'No');
}
// any -> どれか１つでもいけたらtrue

// every -> 全ていけたらtrue

// void main() {
//   final a = [2,4,8];
//   final ans = a.every((e) => e % 2 == 0);
//   print(ans);
  
  
//   final b = [2,4,5];
//   final ans2 = b.every((e) => e % 2 == 0);
//   print(ans2);
// }
