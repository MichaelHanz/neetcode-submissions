class Solution {
public:

    bool isMatching(char first, char second){
        return ((first == '(' && second == ')') || (first == '{' && second == '}' ) || (first == '[' && second == ']'));
    }
    bool isValid(string s) {
        stack<char> checker;

        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '(' ){
                checker.push(s[i]);
            }
            else{
                if(checker.empty()){
                    return false;
                }
                else if(isMatching(checker.top() , s[i])){
                    checker.pop();
                }
                else{
                    return false;
                }
            }
        }

        if(checker.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
