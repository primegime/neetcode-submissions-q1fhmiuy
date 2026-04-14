class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size() ==2){
            return {1,2};
        }
        unordered_map<int, int> ump;

        for(int i = 0 ; i < numbers.size(); i++){
            int diff = target -numbers[i];
            if(ump.count(diff)){
                return {ump[diff]+1,i+1};
            }
            
            ump[numbers[i]] = i;
        }
        return {};

        
    }
};
