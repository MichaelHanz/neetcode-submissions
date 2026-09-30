class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag = false;
        for(int i = 0; i < s.length() ; i++){
            for(int j = 0; j < t.length() ; j++){
                if(s[i] == t[j]){
                    flag = true;
                    break;
                }
                else{
                    flag = false;
                }
            }

            if(!flag){
                return false;
            }
        }

        return true;
    }
};