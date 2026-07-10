class Solution {
public:
    int reverse(int x) {

        int ans = 0, rem;
        while (x != 0) {
            rem = x % 10;
            if (ans > 214748364 || ans <-214748364)
                return 0;
            ans = (ans * 10) + rem;
            x = x / 10;
        }

        return ans;
    }
};