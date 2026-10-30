class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> cnt;
        for (int x : arr) cnt[x]++;

        if (cnt[0] % 2 != 0) return false; 

        sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        for (int x : arr) {
            if (x == 0 || cnt[x] == 0) continue;
            if (cnt[2 * x] < cnt[x]) return false;
            cnt[2 * x] -= cnt[x];
            cnt[x] = 0;
        }
        return true;
    }
};