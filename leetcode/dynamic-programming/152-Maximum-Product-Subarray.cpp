class Solution {
public:
    pair<int,int> solve(int ind,vector<int>&nums,vector<int>&mx,vector<int>&mn){
        if(ind==0){
            mx[0]=nums[0];
            mn[0]=nums[0];
            return {mx[0],mn[0]};
        }
        if(mx[ind]!=-1 && mn[ind]!=-1)
            return {mx[ind],mn[ind]};
        auto prev=solve(ind-1,nums,mx,mn);
        int x=nums[ind];
        mx[ind]=max(x,max(x*prev.first,x*prev.second));
        mn[ind]=min(x,min(x*prev.first,x*prev.second));
        return {mx[ind],mn[ind]};
    }
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        vector<int>mx(n,-1);
        vector<int>mn(n,-1);
        solve(n-1,nums,mx,mn);
        int ans=mx[0];
        for(int i=1;i<n;i++){
            ans=max(ans,mx[i]);
        }
        return ans;
    }
};