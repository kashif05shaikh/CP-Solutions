class Solution {
public:
    vector<int> dp;

    int f(int i,vector<int>& cost) {
        if(i>=cost.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        return dp[i]=cost[i]+min(f(i+1,cost),f(i+2,cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        dp.assign(n,-1);

        return min(f(0,cost),f(1,cost));
    }
};