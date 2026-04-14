class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if(l1!=l2){
            return false;
        }
        vector<char> v1(26, 0);

        for(int i =0;i< l1; i++){
            v1[int(s[i] - 'a')]++; 
        }
        for(int i = 0;i < l2; i++){
            v1[int(t[i]- 'a')]--;
        }

        for(int i =0 ; i< 26 ;i++){
            if(v1[i] != 0){
                return false;
            }
        }
        return true;    
    }
};
