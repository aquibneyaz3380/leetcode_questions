class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  n=nums.size();
        int ms=INT_MIN;
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
          ms=max(sum,ms);
         if(sum<0)sum=0;
        }
        return ms;
    }
};