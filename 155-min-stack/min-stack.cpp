class MinStack {
public:
    std::stack<std::pair<int, int>> main_stack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(main_stack.empty()){
            main_stack.push({val,val});
        }else{
            int current_min=main_stack.top().second;

            main_stack.push({val,min(current_min,val)});
        }
    }
    
    void pop() {
        if(!main_stack.empty()){
            main_stack.pop();
        }
    }
    
    int top() {
        return main_stack.top().first;
    }
    
    int getMin() {
        return main_stack.top().second;
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