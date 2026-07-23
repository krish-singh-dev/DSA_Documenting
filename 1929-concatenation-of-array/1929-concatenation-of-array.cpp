class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=2*nums.size();
        int arr[n];
        int index=nums.size();
        for(int i=0;i<index;i++ ){
         arr[i] = nums[i];
         arr[i + index] = nums[i];
        }
       vector<int> vec(arr, arr + n);
        return vec;
    }
};