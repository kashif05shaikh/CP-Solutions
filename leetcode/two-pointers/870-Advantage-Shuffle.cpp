class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
            v.push_back({nums2[i], i});

        sort(v.rbegin(), v.rend());

        vector<int> ans(n);

        int l = 0, r = n - 1;

        for (auto [value, index] : v) {
            if (nums1[r] > value) {
                ans[index] = nums1[r];
                r--;
            } else {
                ans[index] = nums1[l];
                l++;
            }
        }

        return ans;
    }
};