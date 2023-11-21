List<int> mergeSort(List<int> numbers) {
  if (numbers.length <= 1) {
    return numbers;
  }
  final center = numbers.length ~/ 2;
  final left = numbers.sublist(0,center);
  final right = numbers.sublist(center);
  return [];
}