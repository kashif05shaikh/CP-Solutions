
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1;
        int maxi = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                inc++;
            }
            else {
                inc = 1;
            }
            if(nums[i] < nums[i-1]) {
                dec++;
            }
            else {
                dec = 1;
            }
            maxi = max(maxi, max(inc, dec));
        }
        return maxi;
    }
};
