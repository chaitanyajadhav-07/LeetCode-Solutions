class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        vector<int> distinct;

        // Store distinct elements
        for(int i = 0; i < nums.size(); i++) {
            bool found = false;

            for(int j = 0; j < distinct.size(); j++) {
                if(nums[i] == distinct[j]) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                distinct.push_back(nums[i]);
            }
        }

        // Find element with maximum frequency
        int maxCount = 0;
        int answer = 0;

        for(int i = 0; i < distinct.size(); i++) {
            int count = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(distinct[i] == nums[j]) {
                    count++;
                }
            }

            if(count > maxCount) {
                maxCount = count;
                answer = distinct[i];
            }
        }

        return answer;
    }
};
