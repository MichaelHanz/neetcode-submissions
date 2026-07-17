class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums2;
        int longestConsecutive = 0;
        for (int& num : nums) {
            nums2.insert(num);
        }
        for (auto& num : nums2) {
            if (nums2.find(num - 1) == nums2.end()) {
                int shortConsecutive = 1;
                int next = num + 1;
                while (nums2.find(next) != nums2.end()) {
                    next++;
                    shortConsecutive++;
                }
                longestConsecutive = max(shortConsecutive, longestConsecutive);
            }
        }
        return longestConsecutive;
    }
};
