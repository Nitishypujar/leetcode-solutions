
class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        if (power < 0) {
            x = 1.0 / x;
            power = -power;
        }

        double ans = 1.0;

        while (power > 0) {
            if (power & 1LL) {
                ans *= x;
            }
            power >>= 1;
            if (power > 0) {
                x *= x;
            }
        }

        return ans;
    }
};

