
// Learnt Hashmap in this

// Missing Element SOlution TLE exceeded
// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int firstRepeated(int arr[], int n) {
//         // code herfe
//         for(int i = 0; i<n;i++){
//             for(int j = i+1;j<n;j++){
                
//                 if(arr[i]==arr[j]){
//                     return i+1;
//                 }
                
//             }
//         }
        
//         return -1;
//     }
// };
//GFG
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code herfe
        bool flag = false;
     unordered_map<int,int> seen;

    for (int i =0;i<n;i++) {
         seen[arr[i]]++;
        
       
        }
        int ans = 0;
     for(int i =0;i<n;i++){
         if(seen[arr[i]]>1){
             ans=i+1;
             return ans;
         }
     }
    

    return -1;  // If no repeating element is found

    }
};


