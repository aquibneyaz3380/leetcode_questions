class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n =nums.size();
        int ones=count(nums.begin(),nums.end(),1);
        if(ones>0)return n-ones;
        int operations=INT_MAX;
        for(int i=0;i<n-1;i++){
            int GCD=nums[i];
            for(int j=i+1;j<n;j++){
                GCD=gcd(nums[j],GCD);
                if(GCD==1){
                    operations=min(operations,j-i);
                    break;
                }
            }
               
        }
         if(operations==INT_MAX)return -1;
  
        return operations+ n-1;
    }
};