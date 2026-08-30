class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n =nums.size();
        int minIdx=min_element(nums.begin(),nums.end())-nums.begin();
        int maxIdx=max_element(nums.begin(),nums.end())-nums.begin();
        int Leftidx=min(minIdx,maxIdx);
        int rightidx=max(minIdx,maxIdx);
        return min({Leftidx+1+n-rightidx,rightidx+1,n-Leftidx});
    }
};