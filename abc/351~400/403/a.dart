import 'dart:io';

void main() {
  final n = int.parse(stdin.readLineSync()!);
  final ab = List.generate(
      n,
      (_) =>
          stdin.readLineSync()!.split(' ').map((x) => int.parse(x)).toList());
  var ans = 0;
  for (var element in ab) {
    if (element[0] < element[1]) {
     ans++;
    }
  }
  print(ans);
}
