class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.length();
        
        int res =0;

        for(int i =0; i< size;i++){
            unordered_map<char, int > ump;
            int maxf = 0;
            for(int j = i;j<size; j++){
                ump[s[j]]++;
                maxf = max(maxf, ump[s[j]]);
                if((j-i+1)- maxf <=k){
                    res = max(res, j-i+1);
                }
            }
        }
        return res;
        
    }
};
