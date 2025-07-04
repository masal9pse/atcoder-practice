// 分配法則に直す
import 'dart:io';

void main() {
  final n = int.parse(stdin.readLineSync()!);
  final a = stdin.readLineSync()!.split(' ').map(int.parse).toList();

  int answer = 0;
  int rightSum = 0;

  for (int i = n - 1; i >= 0; i--) {
    answer += a[i] * rightSum;
    rightSum += a[i];
  }

  print(answer);
}
