class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> results;
        sort(nums.begin() , nums.end());

        int candidate1 = nums.at((nums.size() / 3));
        int times = std::count(nums.begin() , nums.end() , candidate1);

        if(times > (nums.size() / 3)){
            results.push_back(candidate1);
        }

        int candidate2 = nums.at(min((int)nums.size() - 1, 2 * (int)(nums.size() / 3) + (nums.size() % 3 > 0 ? 1 : 0)));
        times = std::count(nums.begin() , nums.end() , candidate2);

        if(candidate1 != candidate2 && times > (nums.size() / 3) ){
            results.push_back(candidate2);
        }

        return results;
    }
};