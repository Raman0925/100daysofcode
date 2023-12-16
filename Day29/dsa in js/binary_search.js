class Solution {
    binarySearch(a, target_element) {
        let left = 0;
        let right = a.length - 1; // Adjust right to the last valid index.

        while (left <= right) { // Change the condition to include equality.
            let mid = Math.floor((left + right) / 2);

            if (target_element < a[mid]) {
                right = mid - 1;
            } else if (target_element > a[mid]) { // Use else if to avoid unnecessary checks.
                left = mid + 1;
            } else {
                return mid;
            }
        }

        return -1; // Element not found.
    }
}

const solution = new Solution();
let a = [10, 20, 30, 40, 50, 60,Infinity,Infinity];
let target_element = Infinity;

let result = solution.binarySearch(a, target_element);
console.log(result);
