class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()){
            return 0;
        }
        sort(nums.begin(), nums.end());
            int mx = 1;
            int count =1;
        for(int i =1;i < nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                count++;
            }
            else if( nums[i]- nums[i-1]==0){
                continue;
            }
            else{
                mx = max(mx, count);
                count =1;
            }
        }
        mx = max(mx, count);
        return mx;
        
    }
};
