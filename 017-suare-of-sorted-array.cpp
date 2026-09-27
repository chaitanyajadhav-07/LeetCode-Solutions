class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums1;
        for(int i =0; i<nums.size(); i++){
            nums1.push_back(nums[i] * nums[i]);
        }
        sort(nums1.begin(), nums1.end());
        return nums1;
    }
};
