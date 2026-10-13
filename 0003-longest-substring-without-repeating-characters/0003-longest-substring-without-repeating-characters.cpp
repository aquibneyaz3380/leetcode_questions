class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector<int>hash(256,-1);
     int l=0;
     int r=0;
     int ml=0;
     while(r<s.size()){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }
        ml=max(ml,r-l+1);
        hash[s[r]]=r;
        r++;
     }
  return ml;
    }
};