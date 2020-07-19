#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){


    long long l,r,m,a,b,c,n;
    cin>>l>>r>>m;


        for(long long j=1;j<=500000;j++ ){
            for(long long k=l;k<=r;k++){
                    for(long long i=l;i<=r;i++){


                    for(long long x=l;x<=r;x++){
                        long long result=j*k+i-x;
                        if(result==m){
                            cout<<k<<" "<<i<<" "<<x<<endl;
                            x=r+1;i=r+1;k=r+1;j=m;
                        }
                    }

            }
        }












    }








    }

}
