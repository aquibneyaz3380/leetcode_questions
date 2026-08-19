class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int,int> mp;
        vector<int>result;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
    priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> mh;
               for(auto it:mp){
                mh.push({it.second,it.first});
                if(mh.size()>k)mh.pop();
               }
               for(int i=0;i<k;i++){
                result.push_back(mh.top().second);
                mh.pop();
               }
               return result;

    }
};