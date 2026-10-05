class MinStack {
    stack<int> stacker;
    stack<int> minStacker;

public:
    MinStack() {
    }
    
    void push(int val) {
        if(minStacker.empty() || val <= minStacker.top()){
            minStacker.push(val);
        }

        stacker.push(val);
    }
    
    void pop() {
        if(stacker.top() == minStacker.top()){
            minStacker.pop();
        }

        stacker.pop();
    }
    
    int top() {
        return stacker.top();
    }
    
    int getMin() {
        return minStacker.top();
    }
};
