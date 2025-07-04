import 'dart:io';

void main() {
  // 入力
  final nm = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  final n = nm[0];
  final m = nm[1];
  final a = stdin.readLineSync()!.split(' ').map(int.parse).toList();

  // 後ろから削っていく
  for (int removeCount = 0; removeCount <= n; removeCount++) {
    final current = a.sublist(0, n - removeCount);
    final unique = current.toSet();
    bool allPresent = true;
    for (int x = 1; x <= m; x++) {
      if (!unique.contains(x)) {
        allPresent = false;
        break;
      }
    }
    if (!allPresent) {
      print(removeCount);
      return;
    }
  }
}
