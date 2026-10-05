class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0; 
        string merged = "";

        while(i < word1.length() && j < word2.length()){
            merged += word1[i];
            merged += word2[j];
            i++;
            j++;
        }
        merged += word1.substr(i);
        merged += word2.substr(j);

        return merged;
    }
};