class Solution {
public:
    int dp[10];

    int solve(int n) {
        if(n==0) return 1;

        if(n==1) return 9;

        if(dp[n]!=-1) return dp[n];

        return dp[n]=solve(n-1)*(11-n);
    }

    int countNumbersWithUniqueDigits(int n) {
        memset(dp,-1,sizeof(dp));

        int ans=1;

        for(int i=1;i<=n;i++){
            ans+=solve(i);
        }

        return ans;
    }
};