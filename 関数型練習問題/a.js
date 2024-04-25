/** 
 *与えられた配列から偶数のみをフィルタリングする関数 filterEvenNumbers を実装してください。
 また、配列内の各要素を2倍する関数 double を実装し、
 配列内のすべての偶数を2倍した新しい配列を返す関数 doubleEvenNumbers
 も実装してください。 
 * 
*/
const numbers = [1, 2, 3, 4, 5, 6];

const filterEvenNumbers = numbers.filter((value) => value % 2 == 0);
console.log(filterEvenNumbers);
const double = numbers.map((value) => value*2);
console.log(double);
// const doubleEvenNumbers = filterEvenNumbers.map((value) => value*2);

const doubleEvenNumbers = numbers.filter((value) => value % 2 == 0).map((value) => value * 2);
console.log(doubleEvenNumbers);
