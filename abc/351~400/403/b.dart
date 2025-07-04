import 'dart:io';

void main() {
  final s = stdin.readLineSync()!;
  final t = stdin.readLineSync()!;

  var prev = s[0];

  for (var i = 1; i < s.length; i++) {
    final upperCase = RegExp('[A-Z]');
    if (upperCase.hasMatch(s[i])) {
      final prev = s[i-1];
      var f = false;
      for (var i = 0; i < t.length; i++) {
        if (prev == t[i]) f = true;
      }
      if (!f) {
        print("No");
        return;
      }
    }
  }
  print('Yes');
}
