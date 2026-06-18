class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int n : nums){
            count[n]++;
        }

        vector<pair<int,int>> freqList;
        for(auto& p : count){
            freqList.push_back(p);
        }

        sort(freqList.begin(), freqList.end(), [](pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second; 
        });

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(freqList[i].first);
        }

        return result;
    }
};
