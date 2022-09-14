class MinStack {
public:
    
    stack<int> S;
    stack<int> SS; // for minimum value
    MinStack() {
    }
    
    void push(int val) 
    {
        S.push(val);
        
        if(SS.empty() or SS.top()>=val){
            SS.push(val);
        }
    }
    
    void pop() {
        
        if(SS.top()==S.top())
        SS.pop();
        S.pop();
    }
    
    int top() {
        
        return S.top();
    }
    
    int getMin() {
        
        return SS.top();
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