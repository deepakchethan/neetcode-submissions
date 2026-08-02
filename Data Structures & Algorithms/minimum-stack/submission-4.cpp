class MinStack {
public:
    stack<long int> s;
    stack<pair<long int, long int>> minS;
    long int min = INT_MAX;
    
    MinStack() {}
    
    void push(int val) {
        if (val <= min) {
            minS.push({val, min});
            min = val;
        }
        s.push(val);
    }
    
    void pop() {
        if (s.top() == minS.top().first) {
            min = minS.top().second;
            minS.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};
