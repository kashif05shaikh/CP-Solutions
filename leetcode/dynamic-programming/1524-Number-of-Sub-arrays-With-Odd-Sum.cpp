class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long odd = 0, even = 1, res = 0;
        int prefix = 0;

        for (int x : arr) {
            prefix = (prefix + x) % 2;
            if (prefix == 1) {
                res += even;
                odd++;
            } else {
                res += odd;
                even++;
            }
        }
        return res % MOD;
    }
};