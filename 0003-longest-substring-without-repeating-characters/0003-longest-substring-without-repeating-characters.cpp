class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        vector<int>freq(256,-1);
        int max_len=0;
        int l=0;
        int r=0;
        while(r<n){
        if(freq[s[r]]!=-1){
            if(freq[s[r]]>=l){
                l=freq[s[r]]+1;
            }
        }
        int length=r-l+1;
        max_len=max(max_len,length);
        freq[s[r]]=r;
        r++;
        }
        return max_len;
    }
};