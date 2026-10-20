class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<pair<int,int>> ans;
        int i = 0, j = 1;
        while (i < n && j < n) {
            if (j <= i) j = i + 1;
            if (j >= n) break;
            int diff = nums[j] - nums[i];
            if (diff < k) {
                j++;
            } else if (diff > k) {
                i++;
            } else {
                ans.push_back({nums[i], nums[j]});
                int a = nums[i];
                while (i < n && nums[i] == a) i++;
            }
        }
        return ans.size();
    }
};