class MyStack {
private:
queue <int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue <int> temp = q;
        int ret, i = 0;
        while (!q.empty()) {
            ret = q.front();
            q.pop();
            i++;
        }
        for (int k = 0; k < i-1; k++) {
            q.push(temp.front());
            temp.pop();
        }
        return ret;
    }
    
    int top() {
        queue <int> temp =  q;
        int top;
        while (!q.empty()) {
            top = q.front();
            q.pop();
        }
        q = temp;
        return top;
    }
    
    bool empty() {
        return q.empty();
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