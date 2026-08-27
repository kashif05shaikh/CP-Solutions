class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for (int ptr = n - 1; ptr > 0; ptr--) {
            if (arr[ptr] == ptr + 1)
                continue;

            int idx = 0;

            while (arr[idx] != ptr + 1)
                idx++;

            if (idx != 0) {
                reverse(arr.begin(), arr.begin() + idx + 1);
                ans.push_back(idx + 1);
            }

            reverse(arr.begin(), arr.begin() + ptr + 1);
            ans.push_back(ptr + 1);
        }

        return ans;
    }
};