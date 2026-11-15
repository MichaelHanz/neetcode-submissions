class Solution {
public:
    string removeStars(string s) {

        string result;

        for(size_t i = 0; i < s.length() ; i++){
            if(s[i] == '*'){
                if(result.empty()){
                    continue;
                }
                else{
                    result.pop_back();
                }
            }
            else{
                result.push_back(s[i]);
            }
        }

        return result;
    }
};
