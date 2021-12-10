class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        return;
    }
    
    int pop() {
        int a;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        a = s2.top();
        s2.pop();
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return a;
        
        
    }
    
    int peek() {
        int a;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        a = s2.top();
        // s2.pop();
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return a;
        
    }
    
    bool empty() {
        return s1.empty();
        
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