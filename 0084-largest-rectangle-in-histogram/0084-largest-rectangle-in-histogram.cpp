class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>s;
        // right smaller element
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0)right[i]=n;
            else{
                right[i]=s.top();
            }
            s.push(i);
        }
        while(s.size()>0)s.pop();
       // left smaller element
         for(int i=0;i<n;i++){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0)left[i]=-1;
            else{
                left[i]=s.top();
            }
            s.push(i);
        }
        int maxarea=0;
        for(int i=0;i<n;i++){
            int area=heights[i]*(right[i]-left[i]-1);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};