class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int l=0,r =size-1;
        int mxa = -1, a;
        while(r-l >0){
            if(heights[l]<=heights[r]){
                a = heights[l]*(r-l);
                mxa = max(mxa, a);
                l++;
            }
            else{
                a= heights[r]*(r-l);
                mxa = max(mxa, a);
                r--;
            }
        }
        
        return mxa;
    }
};
