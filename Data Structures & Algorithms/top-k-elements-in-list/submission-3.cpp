class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == k){
        return nums;
        }
        unordered_map<int,int> ump;
        for(int i=0;i< nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int> v;
        int val, mx  = -1001;
        while(k!=0){
            mx = -1001;
            val = 1001;
            for(auto &it: ump){
                if(mx<it.second){
                    mx = it.second;
                    val = it.first;
                }
                
            }
            v.push_back(val);
            ump.erase(val);
            k--;
        }
        return v;
        
    }
};
