//Q.1 Write a function that takes an array of numbers as argument
//ANS
function add(num) {
  let sum = 0;
  for (let i = 0; i < num.length; i++) {
    sum += num[i];
  }
  return sum;
}
let num = [10, 100, 1000, 10000, 100000];
const ans = add(num);
console.log(ans);
