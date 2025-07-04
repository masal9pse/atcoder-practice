import 'dart:io';

void main() {
  final n = int.parse(stdin.readLineSync()!);
  final c = stdin.readLineSync()!.split(' ').map((e) => int.parse(e)).toList();
  c.sort();
  final d = c.toSet();
  print(d.length);
  for(int a in d) {
    print(a);
  }
}