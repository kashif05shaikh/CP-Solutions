class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1);
        int p=1;

        for(int i=1;i<=n;i++){
            if(i==p*2) p*=2;
            dp[i]=1+dp[i-p];
        }

        return dp;
    }
};