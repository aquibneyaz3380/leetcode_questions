class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        int smallest = nums[0];
        int largest = nums[0];
        
        
        for(int i = 0; i < n; i++){
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
        }
        
        unordered_set<int> st(nums.begin(), nums.end());
        
        vector<int> result;
        
       
        for(int i = smallest; i <= largest; i++){
            if(st.find(i) == st.end()){
                result.push_back(i);
            }
        }
        
        return result;
    }
};