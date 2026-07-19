class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left =0;
        int right =nums.size()-1;
        int index=nums.size()-1;
        vector<int> arr(nums.size());;
        while(left<=right){
            if((nums[left]*nums[left])<=(nums[right]*nums[right])){
               arr[index]=nums[right]*nums[right];
                right--;
                index--;
            }
            else if(nums[left]*nums[left]>nums[right]*nums[right]){
arr[index]=nums[left]*nums[left];
left++;
index--;
            }
        }
        
        return arr;
    }
};