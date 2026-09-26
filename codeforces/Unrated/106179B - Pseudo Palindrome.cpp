#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n>>d;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        if(n%2==0){
            bool ok=true;

            for(int i=0;i<n;i+=2){
                if(a[i+1]-a[i]>d){
                    ok=false;
                    break;
                }
            }

            cout<<(ok?"YES":"NO")<<endl;
        }
        else{
            bool ok=false;

            for(int mid=0;mid<n;mid+=2){
                bool good=true;

                for(int i=0;i<mid;i+=2){
                    if(a[i+1]-a[i]>d){
                        good=false;
                        break;
                    }
                }

                for(int i=mid+1;i<n;i+=2){
                    if(a[i+1]-a[i]>d){
                        good=false;
                        break;
                    }
                }

                if(good){
                    ok=true;
                    break;
                }
            }

            cout<<(ok?"YES":"NO")<<endl;
        }
    }
}