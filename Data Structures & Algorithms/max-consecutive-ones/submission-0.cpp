class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, l = 0, i = 0;
        while(i < nums.size()){
            if(max < l){
                max = l;
            }

            if(nums[i] == 1){
                l++;
            }
            else{
                l = 0;
            }
            i++;
        }

        if(max < l){
            max = l;
        }

        return max;
    }
};