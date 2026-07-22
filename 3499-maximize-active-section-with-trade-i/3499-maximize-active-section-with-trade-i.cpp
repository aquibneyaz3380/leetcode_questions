class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        int existingcount=count(s.begin(),s.end(),'1');
        vector<int>zeroes;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                int start=i;
                while(i<n && s[i]=='0')i++;
                zeroes.push_back(i-start);
            }
            else{
                i++;
            }
        }
       int maxPairSum=0;
       for(int i=1;i<zeroes.size();i++){
        maxPairSum=max(maxPairSum,zeroes[i]+zeroes[i-1]);
       }
       return maxPairSum + existingcount;
    }
};