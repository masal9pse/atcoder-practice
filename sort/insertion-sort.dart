List<int> insertionSort(List<int> numbers) {
  final lenNumbers = numbers.length;
  for (var i = 1; i < lenNumbers; i++) {
    var temp = numbers[i];
    // print('abc');
    var j = i - 1;
    final b = 1;
    while (i >= 0 && numbers[j] > temp) {
      numbers[j + 1] = numbers[j];
      j -= 1;
      final a = 1;
    }
    numbers[j+1] = temp;
    final c = 1;
  }

  return numbers;
}

void main(List<String> args) {
  print(insertionSort([1,7,8,5]));
  // print(insertionSort([1,2,3,7,8,5]));
}
// 3 2