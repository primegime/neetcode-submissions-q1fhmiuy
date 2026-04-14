class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int size = nums.size();
        for(int i =0;i<size;i++){
            uset.insert(nums[i]);
        }
        return uset.size()<size;
        
    }
};