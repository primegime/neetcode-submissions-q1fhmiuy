class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        int mn = INT_MAX;
        int mx = 0;
        vector< int > prefmin(prices.size());
        vector<int> suffmx(prices.size());
        for(int i = 0;i<prices.size();i++){
            mn = min(mn,prices[i]);
            prefmin[i]= mn;

        }
        for(int i =prices.size()-1;i>=0;i--){
            mx =max(mx,prices[i]);
            suffmx[i] = mx;
        }
        int ans = 0;
        for(int i =0;i<prices.size();i++)
        {
            ans = max(ans,suffmx[i]- prefmin[i]);
        }
        return ans;
        
    }
};
