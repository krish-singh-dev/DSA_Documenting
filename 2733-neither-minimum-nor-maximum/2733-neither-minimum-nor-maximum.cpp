class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        int max_val = *max_element(nums.begin(), nums.end());
        int min_val = *min_element(nums.begin(), nums.end());
        int index = 0;
        if (nums.size() == 1 || nums.size() == 2) {
            return -1;
        } else {
            while (nums[index] == min_val || nums[index] == max_val) {
                index++;
            }
            return nums[index];
        }
    }
};