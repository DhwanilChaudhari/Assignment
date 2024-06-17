//Q.2 Convert the array to an object It should have a key for each unique value of the array
//ANS
function fun(numbers) {
  const obj = {};
  for (const num of numbers) {
    obj[num] = (obj[num] || 0) + 1;
  }
  return obj;
}
const numbers = [1, 2, 2, 3];
const ans = fun(numbers);
console.log(ans);
