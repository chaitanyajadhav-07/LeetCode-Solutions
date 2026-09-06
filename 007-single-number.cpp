class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                count++;
            }
            else {
                if(count == 1)
                    return nums[i-1];

                count = 1;
            }
        }

        // Check the last element
        if(count == 1)
            return nums[nums.size()-1];

        return -1;
    }
};
