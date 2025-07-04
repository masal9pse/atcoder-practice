import 'dart:io';

void main() {
  final nm = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  final n = nm[0];
  final m = nm[1];
  final a = stdin.readLineSync()!.split(' ').map(int.parse).toList();

  final result = List.generate(n + 1, (i) => i).firstWhere((i) {
    final current = a.sublist(0, n - i);
    final unique = current.toSet();
    return !(List.generate(m, (j) => j + 1).every(unique.contains));
  });

  print(result);
}
