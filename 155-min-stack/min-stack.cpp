class MinStack {
public:
        stack<int> x;
        stack<int> y;
    MinStack() {
    }
    
    void push(int value) {
        x.push(value);
        if( y.empty() || value<=y.top()){
            y.push(value);
        }
    }
    void pop() {
        int t=x.top();
        if(t==y.top()){
            y.pop();
        }
        x.pop();
    }
    
    int top() {
        return x.top();
    }
    
    int getMin() {
        return y.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */