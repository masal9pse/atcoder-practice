import 'dart:io';

void main() {
  final t = int.parse(stdin.readLineSync()!);
  for (var i = 0; i < t; i++) {
    final n = int.parse(stdin.readLineSync()!);
    final s = List.generate(
      n,
      (index) =>
          stdin.readLineSync()!.split(' ').map((e) => int.parse(e)).toList(),
    );
    var ans = 0;
    // この計算量判定がむずい。。。
    
  }
}
