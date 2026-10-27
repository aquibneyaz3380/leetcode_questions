class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
    int n =nums.size();
    int lsum=0;
    int rsum=0;
    int maxsum=0;
    for(int i=0;i<k;i++){
     lsum+=nums[i];
    }
    maxsum=max(maxsum,lsum);
    int right=n-1;
    for(int i=k-1;i>=0;i--){
        lsum-=nums[i];
        rsum+=nums[right];
        right--;
        maxsum=max(maxsum,lsum+rsum);
    }
    return maxsum;
    }
};