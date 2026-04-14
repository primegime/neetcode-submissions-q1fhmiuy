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
      
      for(int i =0;i< s.length();i++){
        int t = int(s[i]);
        if ((t >=48 && t<=57 ) || (t >=96 && t<= 122)){
            ns+=s[i];
        }
      }
      string rs = ns;
      reverse(rs.begin(),rs.end());
      

      return ns == rs;
      


        
    }
};
