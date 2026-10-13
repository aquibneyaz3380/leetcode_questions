class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int ml=0;
        int zeroes=0;
        while(r<n){
            if(nums[r]==0)zeroes++;
            while(zeroes>k){
                if(nums[l]==0)zeroes--;
                l++;
            }
            if(zeroes<=k)ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};