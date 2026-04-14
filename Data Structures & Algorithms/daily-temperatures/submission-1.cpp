class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ans;
        stack<int> st;

        for(int i = size - 1; i>=0 ; i--){
            if(st.empty()){
                ans.push_back(0);
            }
            else if((!st.empty()) && (temperatures[st.top()] > temperatures[i])){
                ans.push_back(st.top() - i );
            }
            else if((!st.empty()) && (temperatures[st.top()] <= temperatures[i])){
                while ((!st.empty()) && (temperatures[st.top()] <= temperatures[i])){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top()- i );
                }
            }
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
