class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         int ans =0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
           ans=ans+nums[i];
           arr.push_back(ans);
        }
        return arr;
    }
};