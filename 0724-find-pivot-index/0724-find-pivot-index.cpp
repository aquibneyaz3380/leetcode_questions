class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        vector<int>lsum(n,0);
        int total=0;
        int result=-1;
        total=accumulate(nums.begin(),nums.end(),0);
        lsum[0]=0;
        for(int i=1;i<n;i++){
            lsum[i]=lsum[i-1]+nums[i-1];
        }
        for(int i =0;i<n;i++){
            int rsum=total-lsum[i]-nums[i];
            if(lsum[i]==rsum)return i;
        }
        return result;
    }
};