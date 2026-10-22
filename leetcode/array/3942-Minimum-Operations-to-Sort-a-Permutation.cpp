class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        bool asc = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != (nums[0] + i) % n) {
                asc = false;
                break;
            }
        }
        if (asc) {
            int k = nums[0];
            if (k == 0) {
                ans = 0;
            } else {
                ans = min(ans, n - k);
                ans = min(ans, k + 2);
            }
        }

        bool desc = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != (nums[0] - i + n) % n) {
                desc = false;
                break;
            }
        }
        if (desc) {
            int k = (nums[0] + 1) % n;
            if (k == 0) {
                ans = min(ans, 1);
            } else {
                ans = min(ans, 1 + k);
                ans = min(ans, 1 + (n - k));
            }
        }

        if (ans == INT_MAX) return -1;
        return ans;
    }
};