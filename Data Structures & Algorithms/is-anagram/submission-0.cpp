class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false

        int map[26] = { 0 }

        for(char c : s){

            map[c - 'a']++ ;
        }

        for(char c : t){
            map[c - 'a']--;
        }

        for(int x : map){
            if(x != 0) return false;
        }

        return true
    }
};
