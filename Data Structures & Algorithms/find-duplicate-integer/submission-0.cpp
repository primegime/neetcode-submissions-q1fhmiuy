class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s1;
        for(auto it: nums){
            if(s1.count(it)){
                return it;
            }
            s1.insert(it);
            // cout<<"actual value"<<it<<" "<<s1.count(it)<<"\n";
            // cout<<s1.count(it)<<"\n";
            // if(s1.count(it)){
            //     return it;
            // }
        }
        return 0;
        
    }
};
