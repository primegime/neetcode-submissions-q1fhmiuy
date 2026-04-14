class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        int length = s.length();
        for(int i = 0; i < length;i++ ){
            if((s[i] == '{') || (s[i] == '[') || (s[i] == '(')){
                cout<<"pushed" << " "<< s[i]<< "\n";
                st.push(s[i]);
            }
            else {
                if(s[i] == '}'){
                    if(!st.empty()){
                    if(st.top() == '{'){
                        if(!st.empty())
                        st.pop();
                        //  cout << "popped" << " "<< s[i]<< "\n";
                    }
                    else
                    return false;
                    }

                    else
                    st.push(s[i]);
                    
                }
                else if(s[i] == ']'){
                    if(!st.empty()){
                    if(st.top() == '['){
                        
                        st.pop();
                        //  cout << "popped" << " "<< s[i]<< "\n";
                    }
                     else
                    return false;
                    }
                    else
                    st.push(s[i]);
                   
                }
                else if(s[i] == ')'){
                    if(!st.empty()){
                        if(st.top() == '('){
                            if(!st.empty())
                            st.pop();
                            //  cout << "popped" << " "<< s[i]<< "\n";
                        }
                        else
                        return false;
                    }
                    else
                    st.push(s[i]);
                    
                }
            }
        }
        if(!st.empty())
        return false;
        else
        return true;
        
    }
};
