class Solution {
public:
    int appendCharacters(string s, string t) {
        string subAppend = "";

        int original = 0 , derived = 0;

        while(original < s.length() && derived < t.length()){
            if(s[original] == t[derived]){
                original++;
                derived++; 
            }
            else{
                original++;
            }
            
        }

        return t.length() - derived ;
    }
};