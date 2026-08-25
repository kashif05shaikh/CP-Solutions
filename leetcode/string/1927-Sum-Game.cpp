class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;

        int sum1 = 0, sum2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < half; i++) {
            if (num[i] == '?')
                cnt1++;
            else
                sum1 += num[i] - '0';
        }

        for (int i = half; i < n; i++) {
            if (num[i] == '?')
                cnt2++;
            else
                sum2 += num[i] - '0';
        }

        // If number of ? is odd, Alice can always force a win
        if ((cnt1 + cnt2) % 2 == 1)
            return true;

        // Bob can win only if the existing difference
        // can be exactly compensated by the '?'.
        return sum1 - sum2 != 9 * (cnt2 - cnt1) / 2;
    }
};