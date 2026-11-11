class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long type1 = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        long long type2 = 1LL * max(need1, need2) * costBoth;

        long long type3;

        if (need1 > need2) {
            type3 = 1LL * need2 * costBoth + 1LL * (need1 - need2) * cost1;
        }
        else {
            type3 = 1LL * need1 * costBoth + 1LL * (need2 - need1) * cost2;
        }

        return min({type1, type2, type3});
    }
};