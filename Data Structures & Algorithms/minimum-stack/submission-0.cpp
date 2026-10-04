class MinStack {
    stack<int> stacker;
    stack<int> stacker2;

public:
    MinStack() {
    }
    
    void push(int val) {
        stacker.push(val);
    }
    
    void pop() {
        stacker.pop();
    }
    
    int top() {
        return stacker.top();
    }
    
    int getMin() {
        int minElement = INT_MAX;
        while(!stacker.empty()){
            int temp = stacker.top();
            minElement = min(minElement, temp);
            stacker2.push(temp);
            stacker.pop();
        }
        while(!stacker2.empty()){
            stacker.push(stacker2.top());
            stacker2.pop();
        }

        return minElement;
    }
};
