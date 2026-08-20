class Solution {
public:
    int magicalString(int n) {
        if (n <= 3)
            return 1;

        string s = "122";

        int i = 2;
        int num = 1;
        int cnt = 1;

        while (s.size() < n) {
            int times = s[i] - '0';

            for (int j = 0; j < times && s.size() < n; j++) {
                s += char('0' + num);

                if (num == 1)
                    cnt++;
            }

            num = 3 - num;
            i++;
        }

        return cnt;
    }
};