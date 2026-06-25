class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
          int sub_count=0;
        for(int i=0;i<n;i++){
            int count =0;
            for(int j=i;j<n;j++){
               if(nums[j]==target)count++;
                
                if(2*count>j-i+1)sub_count++;
                
            }
        }
        return sub_count;
    }
};