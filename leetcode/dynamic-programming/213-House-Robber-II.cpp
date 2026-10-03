
class Solution {
public:
    int solve(int ind, vector<int>& nums, vector<int>& dp, int end) {
        if(ind<0) return 0;
        if(ind==0) return nums[0];
        if(dp[ind]!=-1) return dp[ind];

        int pick=nums[ind]+solve(ind-2,nums,dp,end);
        int not_pick=solve(ind-1,nums,dp,end);

        return dp[ind]=max(pick,not_pick);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];

        vector<int> dp1(n,-1),dp2(n,-1);

        vector<int> a(nums.begin(),nums.end()-1);
        vector<int> b(nums.begin()+1,nums.end());

        return max(solve(a.size()-1,a,dp1,0),
                   solve(b.size()-1,b,dp2,0));
    }
};
