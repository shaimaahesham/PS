#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0 , n =nums.size();
        for (int fast = 0; fast < n; ++fast) {
            if (slow < 2 || nums[slow - 2] != nums[fast]) {
                nums[slow] = nums[fast];
                ++slow;
            }
        }
        return slow;
    }
};
