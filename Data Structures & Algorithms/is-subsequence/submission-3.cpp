class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;

        for(const char &v : t){
            if(s[i] == v){
                i++;
            }
        }

        return i == s.length();
    }
};