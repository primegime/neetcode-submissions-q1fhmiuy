class MinStack {
public:
    stack<int> tempst;
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty() && tempst.empty()){
            st.push(val);
            tempst.push(val);
        }
        else if (val <= tempst.top()){
            st.push(val);
            tempst.push(val);
        }
        else{
            st.push(val);
        }
        
    }
    
    void pop() {
        if(st.top() == tempst.top()){
            st.pop();
            tempst.pop();
        }
        else{
            st.pop();
        }
        
    }
    
    int top() {
        int k = st.top();
        return k;
        
    }
    
    int getMin() {
        return tempst.top();

        
    }
};
