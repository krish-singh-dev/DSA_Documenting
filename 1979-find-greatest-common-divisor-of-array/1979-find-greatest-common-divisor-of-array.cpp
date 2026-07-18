class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans = 1;
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        for (int i = 2; i <= mini * maxi; i++) {

            if (mini % i == 0 && maxi % i == 0) {
                ans = i;
            }
        }
        return ans;
    }
};