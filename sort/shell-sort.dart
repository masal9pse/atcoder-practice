void main() {
  // print(shellSort([2,3,]));
  print(shellSort([5,6,9,2,3]));
}

// https://note.com/hatchoutschool/n/n0eb12dd9ffa1
List<int> shellSort(List<int> numbers) {
  final lenNumbers = numbers.length;
  var gap = lenNumbers ~/ 2;
  while(gap > 0) {
   for (var i = gap; i < lenNumbers; i++) {
    final temp = numbers[i];
    var j = i;
    var a = 2;
     while (j >= gap && numbers[j - gap] > temp) {
       numbers[j] = numbers[j - gap];
       j = j - gap;
       final b = 6;
     }
      numbers[j] = temp;
      var c = 3;
   }
   gap = gap ~/ 2;
  //  gap ~/ 2;
   final d = 3;
  }
  return numbers;
}
