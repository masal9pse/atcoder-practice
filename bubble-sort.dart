
void main() {
  // print(bubbleSort([3,2],2));
  // print(bubbleSort([3],1));
  // print(myThinkbubbleSort([3,2],2));
  // print(myThinkbubbleSort2([3,2,1]));
  print(myThinkbubbleSort2([2,3,]));
}
// 3 2
// 左右を比較する
List<int> myThinkbubbleSort(List<int> A,int N){
  if (A.length <= 1) {
    return A;
  }
  
  for (var i=0;i<A.length;i++) {
    if (A[i] != i) {
      if (i == A.length - 1) {
        break;
      }
      if (A[i] > A[i+1]) {
        // temp変数を用意しないと、23行目で更新した値がそのまま24行目のA[i]を代入して結果同じ値になる。
        A[i] = A[i+1];
        A[i+1] = A[i];
      }
    } 
  }
  return A;
}

List<int> myThinkbubbleSort2(List<int> A){
  // if (A.length <= 1) {
  //   return A;
  // }
  final aLength = A.length;
  for (var i = 0; i < aLength; i++) {
    for (var j = 0; j < aLength - 1 - i; j++) {
    // for (var j = 0; j < A.length ; j++) {
      if (A[j] > A[j+1]) {
        A[j] = A[j+1];
        A[j + 1] = A[j];
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