class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;

        string first, second;
        int firstScore, secondScore;

        if (x >= y) {
            first = "ab";
            firstScore = x;
            second = "ba";
            secondScore = y;
        } else {
            first = "ba";
            firstScore = y;
            second = "ab";
            secondScore = x;
        }

        string st;

        for (char c : s) {
            if (!st.empty() && st.back() == first[0] && c == first[1]) {
                st.pop_back();
                score += firstScore;
            } else {
                st.push_back(c);
            }
        }

        string temp;

        for (char c : st) {
            if (!temp.empty() && temp.back() == second[0] && c == second[1]) {
                temp.pop_back();
                score += secondScore;
            } else {
                temp.push_back(c);
            }
        }

        return score;
    }
};