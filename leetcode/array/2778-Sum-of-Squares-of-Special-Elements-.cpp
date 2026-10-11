class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    int ans=0;
    for(int i=1;i<=nums.size();i++){
        int n=nums.size();
        if(n%i==0){
            ans+=nums[i-1]*nums[i-1];
        }
    }
    return ans;    
    }
};