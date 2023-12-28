function insertionSort(arr) {
    const n = arr.length;
    
    for (let i = 1; i < n; i++) {
      const key = arr[i];
      let j = i - 1;
  
      // Move elements of arr[0..i-1] that are greater than key
      // one position ahead of their current position
      while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
      }
  
      // Insert the key into the correct position
      arr[j + 1] = key;
    }
  
    return arr;
  }
  
  // Example usage:
  const unsortedArray = [12, 11, 13, 5, 6];
  const sortedArray = insertionSort(unsortedArray);
  console.log(sortedArray); // Output: [5, 6, 11, 12, 13]
  