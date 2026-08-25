class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
          set<int>st;
        for (int i:nums)
        st.insert(i);
        int i=1;
        while (st.find(k*i)!=st.end())
        i++;
        return k*i;
    }
};