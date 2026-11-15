class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> runs;

        for (char c : s) {
            if (!runs.empty() && runs.back().first == c) {
                runs.back().second++;
                if (runs.back().second == k) {
                    runs.pop_back();
                }
            } else {
                runs.push_back({c, 1});
            }
        }

        string result;
        for (auto& [ch, count] : runs) {
            result.append(count, ch);
        }
        return result;
    }
};