class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int diff_max = -1;
        int sum = 0;

        for(int number : nums) {
            int n = number;
            int maxi = 0;
            int mini = 9;

            while(n != 0) {
                int digit = n % 10;

                maxi = max(maxi, digit);
                mini = min(mini, digit);

                n /= 10;
            }

            int diff = maxi - mini;

            if(diff > diff_max) {
                diff_max = diff;
                sum = number;
            }
            else if(diff == diff_max) {
                sum += number;
            }
        }

        return sum;
    }
};