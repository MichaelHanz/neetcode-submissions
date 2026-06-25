class Solution {
public:
    int lengthOfLastWord(string &str) {
    vector<string> lis;
    string word = "";
    
    for (char c : str) {
        if (c == ' ') {
            // Only push non-empty words
            if (!word.empty()) {  
                lis.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    // Don't automatically push - check if word is not empty
    if (!word.empty()) {
        lis.push_back(word);
    }
    
    return lis.empty() ? 0 : lis.back().length();
}
};