// time = O(1), space = O(2N)
// Leetcode accepted solution
class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
      int min;
        if(st.empty())
        {
            min=val;
        }
        else
        {
            if(st.top().second<val)
            {
                min=st.top().second;
            }
            else
            {
                min=val;
            }
        }
        
      st.push({val,min});  
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
