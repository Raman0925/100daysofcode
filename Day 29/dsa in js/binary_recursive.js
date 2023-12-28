class Solution {
    binarySearch(a, target_element,left,right) {
        // Adjust right to the last valid index.

        if(left<=right){ 
            // Change the condition to include equality.
            let mid = Math.floor(left + (right - left ) / 2);
            
            if (a[mid] === target_element) {
                return mid; // Element found at mid index.
            }
            if (target_element < a[mid]) {
               return this.binarySearch(a,target_element,left,mid-1);
            } else if  (target_element > a[mid]) { // Use else if to avoid unnecessary checks.
                return this.binarySearch(a,target_element,mid+1,right);
            // }\else{
            //     return mid;
            // }
        }}

        return -1; // Element not found.
    }
    binarySearchinitialize(a,target_element){
        return this.binarySearch(a,target_element,0,a.length-1)

    }
}



const solution = new Solution();
let a = [10, 20, 30, 40, 50, 60, 70, 80, 90, "infinite","infinite"];
let target_element = "infinite";

let result = solution.binarySearchinitialize(a, target_element);
console.log(result);
console.log(Infinity );
