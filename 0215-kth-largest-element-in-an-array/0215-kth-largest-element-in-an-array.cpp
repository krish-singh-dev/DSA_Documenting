class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int index=nums.size()-1;
        int current=nums[index];
        int m=k;
       while(k>1){
           if(nums[index]<=current)
           k--;
            index--;
            current=nums[index];
        
          
       }
     
       return current;
    }
};