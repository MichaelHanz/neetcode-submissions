class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stacker;

        for(size_t i = 0 ; i < s.length(); i++){
            if(!stacker.empty() && s[i] == stacker.back().first){
                stacker.back().second++;
                if(stacker.back().second == k){
                    stacker.pop_back();
                }
            }
            else{
                stacker.push_back({s[i], 1});
            }
        }

        string result = "";
        for(auto& c : stacker){
            result.append(c.second, c.first);
        }

        return result;
    }
};