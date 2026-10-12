class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        // step 1 find dip in the array
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                ind =i;
                break;
            }
        }
        // if there is no dip in the array just reverse the array
            if(ind==-1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        // swap the smallest element from the right with the ind elemnt to find just next permutation
        for(int i=n-1;i>ind;i--){
            if(nums[i]> nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
      reverse(nums.begin()+ind+1, nums.end());
        
    }
};