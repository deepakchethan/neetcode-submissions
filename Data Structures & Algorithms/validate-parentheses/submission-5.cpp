class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for (auto i: str) {
            if (i == '}' && !s.empty()) {
                if (s.top() != '{') {
                    return false;
                }
                 s.pop();
                
            } else if (i == ']'  && !s.empty()) {
                if (s.top() != '[') {
                    
                    return false;
                }
                 s.pop();
            } else if (i == ')' && !s.empty()) {
                if (s.top() != '(') {
                    return false;
                }
                 s.pop();
            } else {
                s.push(i);
            }
        }
        if (s.empty()) {
            return true;
        }
        return false;
    }
};
