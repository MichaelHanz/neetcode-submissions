class MyStack {
public:

    queue<int> stacker;

    MyStack() {
    }
    
    void push(int x) {
        stacker.push(x);

        for(int i = 0; i < stacker.size() - 1 ; i++){
            stacker.push(stacker.front());
            stacker.pop();
        }
    }
    
    int pop() {

        int temp = stacker.front();
        stacker.pop();

        return temp;
    }
    
    int top() {
        return stacker.front();
    }
    
    bool empty() {
        return stacker.empty();
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