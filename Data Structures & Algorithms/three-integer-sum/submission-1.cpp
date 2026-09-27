#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        // Step 1: Sort the array
        std::sort(nums.begin(), nums.end());

        // Step 2: Iterate through the array
        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicate elements for the first position
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            // Step 3: Use two pointers to find the remaining two numbers
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    left++; // Need a larger sum
                } else if (sum > 0) {
                    right--; // Need a smaller sum
                } else {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate elements for the second position
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicate elements for the third position
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move both pointers inward after processing a valid triplet
                    left++;
                    right--;
                }
            }
        }
        
        return result;
    }
};