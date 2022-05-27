class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    int t=-1;
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
        t++;
    }
    
    void pop() {
        stack.pop_back();
        t--;
    }
    
    int top() {
        return stack[t];
        
    }
    
    int getMin() {
        auto temp=*min_element(stack.begin(), stack.end());
        return temp;
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