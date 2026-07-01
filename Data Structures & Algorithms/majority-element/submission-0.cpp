class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int target = nums.at((nums.size() / 2));

        int count = std::count(nums.begin() , nums.end() , target);

        if(count > (nums.size() / 2)){
            return target;
        }
    }
};