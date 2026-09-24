class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minindex=nums.size();
        int n =nums.size(); 
        bool check=false;
        for(int i=0;i<n;i++){
            if (nums[i]<=9)
            {
            if(nums[i]==i){
                minindex=min(minindex,i);
                check=true;
            }
            }
            else if(nums[i]>9){
                int num=nums[i];
                int sum=0;
                while(num>0){
                    int last =num%10;
                    sum+=last;
                    num=num/10;

                }
                if(sum==i){
                    minindex=min(minindex,i);
                   check=true;
                }
            }
            
        }
        if (check ==false)
        return -1;
        else 
        return minindex;
    }
};