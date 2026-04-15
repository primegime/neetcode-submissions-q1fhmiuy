class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxpairheap;

        int size = points.size();
        int dist;
        for(int i = 0;i<size;i++){
            dist = (points[i][0]-0)*(points[i][0]-0) + (points[i][1]-0)*(points[i][1]-0);
            maxpairheap.push({dist,{points[i][0],points[i][1]}});

            if(maxpairheap.size()>k){
                maxpairheap.pop();
            }

        }
        vector<vector<int>> ans;
        while(maxpairheap.size()>0){
            // cout<<maxpairheap.top().second<<"\n";
            ans.push_back(maxpairheap.top().second);
            maxpairheap.pop();

        }

        return ans;
        
    }
};
