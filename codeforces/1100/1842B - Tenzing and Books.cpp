#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        long long ans=0;
        for (int k=0;k<3;k++){
            for (int i=0;i<n;i++){
                long long v;
                cin>>v;
                if((v|x)==x)
                    ans|=v;
                else{
                    for(i++;i<n;i++)
                        cin>>v;
                    break;
                }
            }
        }
        cout<<(ans==x?"Yes\n":"No\n");
    }
    return 0;
}