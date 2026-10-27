class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int l = 0 , r = 0;

        while(l < nums1.size() && r < nums2.size()){
            if(nums1[l][0] > nums2[r][0]){
                result.push_back(nums2[r]);
                r++;
            }
            else if(nums1 [l][0] < nums2[r][0]){
                result.push_back(nums1[l]);
                l++;
            }
            else{
                result.push_back({nums1[l][0], nums1[l][1] + nums2[r][1]});
                l++, r++;
            }
        }

        while(l < nums1.size()){
            result.push_back(nums1[l]);
            l++;
        }

        while(r < nums2.size()){
            result.push_back(nums2[r]);
            r++;
        }

        return result;

    }
};
