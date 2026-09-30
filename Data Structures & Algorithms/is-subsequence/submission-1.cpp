class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag;
        for(int i = 0; i < s.length() ; i++){
            flag = false;
            for(int j = 0; j < t.length() ; j++){
                if(s[i] == t[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                return false;
            }
        }
        return true;
    }
};