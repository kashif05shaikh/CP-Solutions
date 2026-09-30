class Solution {
public:
    int solve(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0)return dp[0]=nums[0];
        if(dp[ind]!=-1)return dp[ind];
        return dp[ind]=max(nums[ind],nums[ind]+solve(ind-1,nums,dp));
    }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        solve(n-1,nums,dp);
        int ans=dp[0];
        for(int i=1;i<n;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};