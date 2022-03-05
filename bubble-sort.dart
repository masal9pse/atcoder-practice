
void main() {
  // print(bubbleSort([3,2],2));
  print(bubbleSort([3],1));
}
// 3 2
// 左右を比較する
List<int> bubbleSort(List<int> A,int N){
  if (A.length <= 1) {
    return A;
  }
  
  for (var i=0;i<=A.length;i++) {
    if (A[i] != i) {
      if (A[i] > A[i+1]) {
        A[i] = A[i+1];
        A[i+1] = A[i];
      }
    } 
  }
  return A;
}
