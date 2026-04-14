class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy= strs;
        if (strs.size() == 0)
        return {{}};
        else if (strs.size() == 1)
        return {{strs[0]}};
        else{
            unordered_map<string,vector<string>> ind;
            vector<vector<string>> final;

            for(int i = 0;i< strs.size();i++){
                sort(strs[i].begin(), strs[i].end());
                ind[strs[i]].push_back(copy[i]);
                
            }
            for(auto it : ind){
                final.push_back(it.second);
            }
            return final;

            
        }
        
    }
};
