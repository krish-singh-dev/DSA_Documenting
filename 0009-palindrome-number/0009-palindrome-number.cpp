class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0, rem, org = x;
        if (x < 0) {
            return 0;
        }
        while (x != 0) {
            rem = x % 10;
            if (ans>=214748364){
                return 0;
            }
            ans = ans * 10 + rem;
            x = x / 10;
        }
        if (org == ans) {
            return 1;
        } else {
            return 0;
        }
    }
};