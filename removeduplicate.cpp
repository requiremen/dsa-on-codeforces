// leetcode problem no 26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer = 0;
        int cm = 1;
        int k = 1;
        int n = nums.size();
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            nums[officer+1]=nums[cm];
            officer++;
            cm++;
            k++;
        }
        return k;

        
    }
};
