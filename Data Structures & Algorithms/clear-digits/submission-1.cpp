class Solution {
public:
    string clearDigits(string s) {
        string inputs;

        for(char c : s){
            if(c >= '0' && c <= '9' && inputs.empty()){
                continue;
            }
            else if(c >= '0' && c <= '9'){
                inputs.pop_back();
            }
            else{
                inputs.push_back(c);
            }
        }

        return inputs;

    }
};
