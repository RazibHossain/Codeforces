#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int lcm(int a,int b){
    int lc=0;
    int gc=gcd(a,b);

    return (a*b)/gcd(a, b);


}

int main(){

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
                    int p=1,q=n-1;
                int lowest_lcm=n;
                for(int i=1;i<(n/2);i++){
                    int l=lcm(i,n-i);
                    if(l<lowest_lcm){
                        p=i;q=n-i;
                    }
                }
                cout<<p<<" "<<q<<endl;

        }

    }





}

