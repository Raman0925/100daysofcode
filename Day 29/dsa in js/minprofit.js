//DT20222108450


function maxProfit(prices) {
    if (prices.length <= 1) {
        return 0; // No profit can be made with less than 2 prices
    }

    let minPrice = prices[0];
    let maxProfit = 0;

    for (let i = 1; i < prices.length; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            const currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

// Example usage:
const stockPrices = [7, 1, 5, 3, 6, 4];
console.log(maxProfit(stockPrices)); // Output: 5 (Buy on day 2 (price = 1) and sell on day 5 (price = 6))
