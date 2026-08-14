class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        map<char,int>mpp;
        int ml=0;
        int l=0;
        int r=0;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>2){
                mpp[s[l]]--;
                l++;
            }
            ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};