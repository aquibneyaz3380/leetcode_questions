class Solution {
public:
    int func(vector<int>& nums, int n, int goal) {
        int l = 0, r = 0;
        int sum = 0;
        int cnt = 0;

        if (goal < 0) return 0;

        while (r < n) {
            sum += nums[r] % 2;

            while (sum > goal) {
                sum -= nums[l] % 2;
                l++;
            }

            cnt += r - l + 1;
            r++;
        }

        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        int sum1 = func(nums, n, k);
        int sum2 = func(nums, n, k - 1);

        return sum1 - sum2;
    }
};