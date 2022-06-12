import 'dart:math';

void main() {
//  print(a());
//  print(b());
print(d());
}


int soremadewotasu(int ans) {
  for (var i = 0; i < ans.toString().length; i++) {
    
  }
}

int e() {  
  int count = 0;
  for (var i = 0; i <= 1000000; i++) {
    int tempResult = 0;
    final iStr = i.toString();
   for (var i = 0; i < iStr.length; i++) {
    //  iStr[i]
    // iが3であれば3までの要素数を足すやり方が分からなkった。調べたところ再帰が出てきたが、初見では対応できなかった。
    //  if (count == )
   } 
  }
}

int d () {
  int ans = 0;
  int count = 0;
  List<int> a = [];
  for (var i = 0; i <= 30; i++) {
    for (var j = 0; j <= 40; j++) {
      for (var k = 0; k <= 10; k++) {
        final result = 205 * i + 82 * j + 30 * k;
        a.add(result);
      }
    }
  }
  final k = a.toSet().toList();
  print(k);
  // あとは0を削除する。
  // return a.length;
  return k.length;
}
// double b(){
int b(){
  double ans = 0;
  int count = 1;
  while (ans <= 12) {
    double tempResult = 1 / count;
    ans += tempResult;
    // print(ans);
    count++;
  }
  // return ans;
  return count;
}

int a() {
  int ans = 0;
  for (var i = 1; i <= 99; i++) {
    final temp = pow(i, 4) as int;
    ans += temp;
  }
  return ans;
}
