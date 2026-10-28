class Solution {
public:
  int func(vector<int>&nums,int n , int goal){
    int l=0;
    int r=0;
    int sum=0;
    int cnt=0;
    if(goal<0)return 0;
    while(r<n){
        sum+=nums[r];
        while(sum>goal){
            sum-=nums[l];
            l++;
        }
        if(sum<=goal)cnt+=r-l+1;
        r++;
    }
    return cnt;

 }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal<0)return 0;
        int n= nums.size();
        int sum1=func(nums,n,goal);
        int sum2=func(nums,n,goal-1);
        return sum1-sum2;
    }
};