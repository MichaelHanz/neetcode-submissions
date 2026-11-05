class Solution {
public:
    string clearDigits(string s) {
        stack<char> inputs;

        for(char c : s){
            if(c >= '0' && c <= '9' && inputs.empty()){
                continue;
            }
            else if(c >= '0' && c <= '9'){
                inputs.pop();
            }
            else{
                inputs.push(c);
            }
        }

        string result(inputs.size(), ' ');

        for (int i = result.size() - 1; i >= 0; --i){
            result[i] = inputs.top();
            inputs.pop();
        }

        return result;

    }
};
