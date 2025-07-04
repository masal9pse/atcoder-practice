import 'dart:io';

void main() {
  final n = int.parse(stdin.readLineSync()!);
  final a = stdin.readLineSync()!;

  int answer = 0;
  int accumulated = 0;

  for (int i = 0; i < n; i++) {
    answer += a[i] * accumulated;
    accumulated += a[i];
  }

  print(answer);
}
