class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();
        vector<int> d(n);
        long long k=1LL*k1+k2;
        int mx=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            d[i]=abs(nums1[i]-nums2[i]);
            mx=max(mx,d[i]);
            sum+=d[i];
        }
        if(sum<=k) return 0;
        int l=0,r=mx;
        while(l<r){
            int mid=l+(r-l)/2;
            long long need=0;
            for(int x:d){
                need+=max(0,x-mid);
            }
            if(need<=k) r=mid;
            else l=mid+1;
        }
        int level=l;
        long long used=0,ans=0;

        for(int x:d){
            used+=max(0,x-level);
            int v=min(x,level);
            ans+=1LL*v*v;
        }

        long long rem=k-used;
        ans-=rem*(2LL*level-1);

        return ans;
    }
};