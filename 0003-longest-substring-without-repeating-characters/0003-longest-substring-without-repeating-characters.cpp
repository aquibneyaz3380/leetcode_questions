class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            vector<int>hash(256,-1);
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1)break;
                maxlen=max(maxlen,j-i+1);
                 hash[s[j]]=1;
            }
           
        }
        return maxlen;
    }
};