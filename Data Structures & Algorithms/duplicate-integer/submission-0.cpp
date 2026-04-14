class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        set<int> uniques;
        for(int i=0;i<size; i++){
            uniques.insert(nums[i]);
        }
        int size2 = uniques.size();
        if (size!=size2)
        return true;
        else 
        return false;
        
    }
};