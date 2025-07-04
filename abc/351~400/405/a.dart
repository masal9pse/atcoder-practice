import 'dart:io';

void main() {
  final input = stdin.readLineSync()!;
  final parts = input.split(' ').map(int.parse).toList();
  final r = parts[0];
  final x = parts[1];

  bool isRated = false;
  if (x == 1) {
    isRated = (1600 <= r && r <= 2999);
  } else if (x == 2) {
    isRated = (1200 <= r && r <= 2399);
  }

  print(isRated ? "Yes" : "No");
}
