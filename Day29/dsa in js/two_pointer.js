function findPairWithSum(arr, targetSum) {
    let left = 0;
    let right = arr.length - 1;

    while (left < right) {
        const currentSum = arr[left] + arr[right];

        if (currentSum === targetSum) {
            return [arr[left], arr[right]];
        } else if (currentSum < targetSum) {
            left++;
        } else {
            right--;
        }
    }

    return null; // Pair not found.
}

const sortedArray = [20,40,60,80,90,120,240];
const targetSum = 210;
const result = findPairWithSum(sortedArray, targetSum);
console.log(result); // Outputs: [3, 6]
