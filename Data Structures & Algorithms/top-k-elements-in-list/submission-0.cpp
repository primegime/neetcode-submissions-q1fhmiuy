class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int,int> mp; 
        vector<int> v1;
        for( int i =0;i<size;i++){
            mp[nums[i]]++;
        }
        int maax ;
        // for( const auto& pair: mp){
        //     pair.first
        // }
        while(k!=0){
            int maax = INT_MIN;
            int key,value;
            for(const auto& it: mp){
                if(it.second>maax){
                    key = it.first;
                    maax = it.second;
                }
            }
            v1.push_back(key);
            mp.erase(key);
            k--;
        }
    return v1;

        
    }
};
