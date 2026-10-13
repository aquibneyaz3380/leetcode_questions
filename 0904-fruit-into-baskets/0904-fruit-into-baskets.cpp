class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n =fruits.size();
        int l=0;
        int r=0;
        int ml=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[fruits[r]]++;
            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0)
                    mpp.erase(fruits[l]);
                       l++;
            }
            if(mpp.size()<=2)ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};