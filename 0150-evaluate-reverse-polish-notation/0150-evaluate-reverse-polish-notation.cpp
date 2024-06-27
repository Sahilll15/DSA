class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const auto& token : tokens) {
            if (isdigit(token.back())) { 
                s.push(stoi(token));     
            } else {
                int elem2 = s.top();    
                s.pop();
                int elem1 = s.top();
                s.pop();
                
                if (token == "+") {
                    s.push(elem1 + elem2);
                } else if (token == "-") {
                    s.push(elem1 - elem2);
                } else if (token == "*") {
                    s.push(elem1 * elem2);
                } else if (token == "/") {
                    s.push(elem1 / elem2);
                }
            }
        }

        return s.top(); 
    }
};
