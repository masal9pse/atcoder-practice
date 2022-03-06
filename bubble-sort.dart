
void main() {
  print(bubbleSort([3,2,5,1,7]));
}

List<int> bubbleSort(List<int> A){
  final aLength = A.length;
  for (var i = 0; i < aLength; i++) {
    for (var j = 0; j < aLength - 1 - i; j++) {
      // i == 1 && j == 2
      if (A[j] > A[j+1]) {
        final temp = A[j];
        A[j] = A[j+1];
        A[j + 1] = temp;
        // print(322222);
      }
    }
  }
  return A;
}

// リストが２個の場合 now
// リストが３個の場合 
// リストが４個の場合
// リストが５個の場合
// [3,2,5]の場合