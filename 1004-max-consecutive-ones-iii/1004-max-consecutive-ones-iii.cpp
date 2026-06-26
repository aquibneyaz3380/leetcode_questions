class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int max_len=0;
        int zeros=0;
        int l=0;int r=0;
        while(r<n){
            if(nums[r]==0) zeros++;
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                    l++;
            }
            if(zeros<=k){
                int length=r-l+1;
                max_len=max(max_len,length);
            }
            r++;
        }
        return max_len; 
    }
};