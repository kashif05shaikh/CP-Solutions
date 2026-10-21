class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k) continue;
            bool ok = true;
            int prevMax = 0;
            for (int s = 0; s < n && ok; s += k) {
                int mn = INT_MAX, mx = 0, desc = 0;
                for (int i = s; i < s + k; i++) {
                    mn = min(mn, nums[i]);
                    mx = max(mx, nums[i]);
                    int nxt = (i + 1 == s + k) ? s : i + 1;
                    if (nums[i] > nums[nxt]) desc++;
                }
                if (desc > 1 || mn < prevMax) ok = false;
                prevMax = mx;
            }
            if (ok) ans += k;
        }
        return ans;
    }
};