#include <bits/stdc++.h>
using namespace std;

const long long MOD=1000000007;

int n,k;
vector<vector<long long>> dp;

long long f(int x,int len){
    if(len==k)
        return 1;

    if(dp[x][len]!=-1)
        return dp[x][len];

    long long ans=0;

    for(int y=x;y<=n;y+=x)
        ans=(ans+f(y,len+1))%MOD;

    return dp[x][len]=ans;
}

int main(){
    cin>>n>>k;

    dp.assign(n+1,vector<long long>(k+1,-1));

    long long ans=0;

    for(int x=1;x<=n;x++)
        ans=(ans+f(x,1))%MOD;

    cout<<ans;
}