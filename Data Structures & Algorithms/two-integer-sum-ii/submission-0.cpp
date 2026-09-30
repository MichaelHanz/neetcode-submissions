class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int l = 0;
        int r = numbers.size() - 1;
        int total = 0;

        while(l < r){
            total = numbers[l] + numbers[r];
            if(total > target){
                r--;                
            }
            else if(total < target){
                l++;
            }
            else{
                return {l + 1, r + 1};
            }
        }
    }
};
