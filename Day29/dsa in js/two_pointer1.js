class Solution{
    findPairWithSum(arr, targetSum){
      
                let left = 0;
                let right = arr.length-1;
                while(left<right){
                        let current_sum = arr[left] + arr[right];
                        if(targetSum === current_sum ){
                            return [arr[left],arr[right]];
                        }
                        else if(targetSum > current_sum){
                              left++;

                        }
                        else{
                            right --;

                        } }
                        return null;

    }
}
const solution = new Solution();

const sortedArray = [20,40,60,80,90,120,240];
const targetSum = 210;
const result = solution.findPairWithSum(sortedArray, targetSum);
console.log(result); // Outputs: [3, 6]
