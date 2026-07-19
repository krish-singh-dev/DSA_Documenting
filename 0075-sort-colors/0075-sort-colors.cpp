class Solution {
public:
    void sortColors(vector<int>& nums) {
       for(int pass=0;pass<nums.size()-1;pass++){ 
        for(int adj=0;adj<nums.size()-1-(pass);adj++){
            if(nums[adj]>nums[adj+1]){
                swap(nums[adj],nums[adj+1]);
              }
            }   
       }

    }
};