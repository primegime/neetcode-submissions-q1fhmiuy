class Solution {
public:
    string to_lower(string s){
        for(char &c:s){
            c = tolower(c);

        }
        return s;
    }
    bool isPalindrome(string s) {
      s = to_lower(s);
      string ns;
      string rs;
      for(int i =0;i< s.length();i++){
        int t = int(s[i]);
        if ((t >=48 && t<=57 ) || (t >=96 && t<= 122)){
            ns+=s[i];
        }
      }
      for(int i = ns.length()-1;i >= 0;i--){
        int t = int(ns[i]);
        rs+=ns[i];
      }

      return ns == rs;
      


        
    }
};
