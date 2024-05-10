#include <stack>
#include <utility>

class MinStack {
private:
    std::stack<std::pair<int, int>> st;

public:
    MinStack() {}

    void push(int val) {
        int minVal = st.empty() ? val : std::min(val, st.top().second);
        st.push(std::make_pair(val, minVal));
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
        }
    }

    int top() {
        if (!st.empty()) {
            return st.top().first;
        }
        throw std::out_of_range("Stack is empty");
    }

    int getMin() {
        if (!st.empty()) {
            return st.top().second;
        }
        throw std::out_of_range("Stack is empty");
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