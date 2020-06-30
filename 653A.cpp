#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){

        long long x,y,n,k;
        cin>>x>>y>>n;

        if(x>n){
                cout<<0<<endl;

            }
        else{
        for(long long i=n;i>0;i--){
            long long r=i%x;
            if(r==y){
                cout<<i<<endl;
                i=-1;
            }

        }
        }

    }







}
