class MyStack {
    queue<int> q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
     for(int i = 0; i<q1.size()-1; i++) {
        q1.push(q1.front());
        q1.pop();
    }
        
    }
    
    int pop() {
        int r=q1.front();
        q1.pop();
        return r;
        
    }
    
    int top() {
        int r=q1.front();
        return r;
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */