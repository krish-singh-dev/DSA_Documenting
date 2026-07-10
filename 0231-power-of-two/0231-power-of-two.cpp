class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem = 0;
        if (n == 1) {
            return 1;
        }

        else if (n <= 0) {
            return 0;
        } else {
            while (n != 0) {
                rem = n % 2;
                if (rem != 0) {
                    return 0;
                }
                n = n / 2;
                if (n==1){
                    break;
                }
            }
            return 1;
        }
    }
};