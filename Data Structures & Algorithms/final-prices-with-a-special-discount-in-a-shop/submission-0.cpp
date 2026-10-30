class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> answer=prices,stack;
        for (int i=0;i<n;i++) {
            while (!stack.empty() && prices[stack.back()]>=prices[i]) { answer[stack.back()]-=prices[i]; stack.pop_back(); }
            stack.push_back(i);
        }
        return answer;
    }
};
