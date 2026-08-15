class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int cnt0 = 0;

        for(int i = 0; i < n; i++) {
            xor1 = xor1 ^ nums[i];

            if(nums[i] == 0) {
                cnt0++;
            }
        }

        if(xor1 != 0) {
            return n;
        }

        if(cnt0 == n) {
            return 0;
        }

        return n - 1;
    }
};