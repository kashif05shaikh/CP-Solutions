class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0;

        for (int x : nums) {
            sum += x;
        }

        long long diff = abs((long long)goal - sum);

        return (diff + limit - 1) / limit;
    }
};