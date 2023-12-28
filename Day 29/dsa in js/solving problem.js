//3. Max and Second Max
// //4. Minimum distance between two numbers 
// 5. Rotate Array
//6. Max sum path in two arrays
//7. Remove duplicates in small prime array 
//8. Max sum in the configuration
//9. Sorted subsequence of  size 3 
//10. Find duplicates in an array 
//11. Mountain Subarray Problem 
//12. Wave Array 
//13. Equilibrium Point
//14. Stickler Thief 
//15. Product array puzzle
//16. Maximum Index 
//17. Subarray with given sum 
//18. Kadane's Algorithm
//19. Trapping Rain Water
//20. Container With Most Water 
//22. Three Sum Closest 
//23. Max Circular Subarray Sum
//24. Rearrange an array with O(1) extra space 
// /25. Frequencies of Limited Range Array Elements 25. Frequencies of Limited Range Array Elements 
// 26. Union of Two Sorted Arrays
//27. Intersection of two array\

//Stockprices
    function maxProfit(prices) {
        let minPrice = prices[0]; // Initialize the minimum price to the first day's price.
        let maxProfit = 0; // Initialize the maximum profit to 0.
    
        for (let i = 1; i < prices.length; i++) {
            // Check if the current day's price allows for a higher profit.
            if (prices[i] > minPrice) {
                maxProfit = Math.max(maxProfit, prices[i] - minPrice);
            } else {
                // If the current day's price is lower than the minimum price, update the minimum price.
                minPrice = prices[i];
            }
        }
    
        return maxProfit;
    }
    
    // Example usage:
    const prices = [7, 1, 5, 3, 6, 4];
    const result = maxProfit(prices);
    console.log(result); // Outputs: 5
    
