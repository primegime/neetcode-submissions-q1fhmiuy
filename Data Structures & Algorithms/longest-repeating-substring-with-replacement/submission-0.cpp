// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int size = s.length();
//         unordered_map<char, int > ump;
//         int res =0;

//         for(int i =0; i< size;i++){
//             int maxf = 0;
//             for(int j = i;j<size; j++){
//                 ump[s[j]]++;
//                 maxf = max(maxf, ump[s[j]]);
//                 if((j-i+1)- maxf <=k){
//                     res = max(res, j-i+1);
//                 }
//             }
//         }
//         return res;



        
//     }
// };
// // Input: s = "XYYX", k = 2

// // Output: 4

class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> count;
            int maxf = 0;
            for (int j = i; j < s.size(); j++) {
                count[s[j]]++;
                maxf = max(maxf, count[s[j]]);
                if ((j - i + 1) - maxf <= k) {
                    res = max(res, j - i + 1);
                }
            }
        }
        return res;
    }
};