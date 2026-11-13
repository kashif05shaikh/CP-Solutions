
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<long long>st;
    st.insert(0);
    long long sum=0;
    bool found=false;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        if(i%2==0)sum+=x;
        else sum-=x;
        if(st.count(sum))found=true;
        st.insert(sum);
    }
    if(found)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
