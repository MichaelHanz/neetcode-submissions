#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& heights) { //[cite: 2]
        int left = 0;
        int right = heights.size() - 1;
        int max_water = 0;

        while (left < right) {
            // Calculate the area for the current container
            int current_height = std::min(heights[left], heights[right]);
            int current_width = right - left;
            int current_area = current_height * current_width;

            // Update max_water if the current area is larger
            max_water = std::max(max_water, current_area);

            // Move the pointer pointing to the shorter line
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
    }
};