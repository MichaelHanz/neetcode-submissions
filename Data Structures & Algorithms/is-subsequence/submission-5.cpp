class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;

        for(char v : t){
            if(i == s.length()) return true;
            if(s[i] == v){
                i++;
            }
        }

        return i == s.length();
    }
};