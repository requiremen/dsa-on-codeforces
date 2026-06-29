 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2)
            return nums.size();

        int k = 2;
        int cm = 2;
        int ofiicer = 2;

        int n = nums.size();

        while (cm < n) {

            if (nums[cm] != nums[ofiicer - 2]) {
                nums[ofiicer] = nums[cm];
                ofiicer++;
                k++;
            }

            cm++;
        }

        return k;
    }
};
