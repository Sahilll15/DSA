class MyQueue {
public:
    stack<int> input, output;

    MyQueue() {}

    void push(int x) {
        input.push(x);
    }

    int pop() {
        int val;
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        if (!output.empty()) {
            val = output.top();
            output.pop();
            return val;
        }
        throw out_of_range("Cannot pop from an empty queue.");
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        if (!output.empty()) {
            return output.top();
        }
        throw out_of_range("Cannot peek from an empty queue.");
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};