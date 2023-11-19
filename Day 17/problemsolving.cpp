class Solution {
public:
    int findPairs(vector<int>& nums, int k) { 
        sort(nums.begin(),nums.end());
            set<pair<int,int>> st;
          int i = 0;
            int j = 1;
       
            
        while(j<nums.size()){
            if(i==j){
                j++;
                
            }
           int  current_diff = nums[j] - nums[i]; 
            if(current_diff == k){
             cout<<nums[i]<<nums[j]<<endl;
              st.insert({nums[i], nums[j]});
                ++i;
                ++j;
            }
            else if (current_diff<k){
                j++;

            }
            else{
                i++;
            }

        }
        return st.size();
    }
};