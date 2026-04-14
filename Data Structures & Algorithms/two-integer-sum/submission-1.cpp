class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices = {0,1};
        if (nums.size() == 2)
        return indices;
        else 
        indices.resize(0);
        unordered_map<int,int> subs1;
        unordered_map<int,int> subs2;
        for(int i = 0;i<nums.size();i++){
            subs1[nums[i]] = i;
        }

        for(int i = 0;i<nums.size();i++){
            if(subs1.find(target - nums[i]) != subs1.end() && subs1[target- nums[i]]!=i){
                indices.push_back(i);
                indices.push_back(subs1[target- nums[i]]);
                break;
            }    
        }
        
        return indices;

        
    }
};
