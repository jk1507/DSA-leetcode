class MyQueue {
public:
    stack<int> x1;
    stack<int> y;
    MyQueue() {
        
    }
    
    void push(int x) {
        x1.push(x);
    }
    void q(){
        if(y.empty()){
            while(!x1.empty()){
                y.push(x1.top());
                x1.pop();
            }
        }
    }
    int pop() {
        q();
        int a =y.top();
        y.pop();
        return a;
    }
    
    int peek() {
        q();
        int a=y.top();
        return a;
    }
    
    bool empty() {
        return x1.empty() && y.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */