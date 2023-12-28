function matrix(arr, target_value) {
    let row = 0;
    let column = arr[0].length - 1; // Initialize to the rightmost column.
    let rows = arr.length;
    
    while (row < rows && column >= 0) {
        const current_value = arr[row][column];
        
        if (target_value === current_value) {
            return true;
        } else if (target_value > current_value) {
            row++;
        } else {
            column--;
        }
    }
    
    return false; // Target not found in the matrix.
}

const arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

const found = matrix(arr, 10);
console.log(found); // Outputs: true
