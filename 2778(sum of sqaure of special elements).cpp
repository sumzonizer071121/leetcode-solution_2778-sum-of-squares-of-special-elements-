class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long sum = 0;
        size_t i = 1;

        while (i <= nums.size()) {
            if (nums.size() > 50 || nums[i - 1] > 50) {
                return 0;
            }

            if (nums.size() % i == 0) {
                sum = sum + nums[i - 1] * nums[i - 1];
            }
            i++;
        }
        return sum;
    }
};