class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int left =0,right =nums.size()-1,temp,k=0;
         
         
         while(left<=right){
            if(nums[left]==val){
                 temp=nums[left];
               nums[left]=nums[right];
               nums[right]=temp;
               right--;
            }
            else{left++;}
         }
         return right+1;
    }
};