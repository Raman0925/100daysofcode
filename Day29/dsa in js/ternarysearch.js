function ternarySearch(arr,key){
    left = arr[0];
    right = arr.length;
  const mid1 = Math.floor(left + (right-left)/3);
  const mid2 = Math.floor(right - (right-left)/3);
  while(right>= left){if(key === mid1){
    return mid1; }
 else if(key === mid2){
    return mid2; }
    else if(key < arr[mid1]) {
        right = mid -1;
}else if (key > arr[mid2]){
        left = mid +1
}else{
    left = mid1+1;
    right = mid2-1;
}}
}
