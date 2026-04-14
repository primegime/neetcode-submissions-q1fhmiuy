class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        if (len1 != len2)
        return false;

        unordered_map<char,int> record1;
        unordered_map<char,int> record2;
        for(int i =0;i<len1;i++){
            record1[s[i]]++;
            record2[t[i]]++;

        }

        for( int i =0;i<record1.size();i++){
            if (record1[i] != record2[i])
            return false;
        }

        return true;


        
    }
};
