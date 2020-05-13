//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define pb push_back
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define T ll t; cin>>t; while(t--)
using namespace std ;

ll a[3]={1,3,4};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
     ll b[n+1];
    b[0]=0;
    
    f(i,1,n+1)
    b[i]=INT_MAX;
    
    f(i,1,n+1){
        f(j,0,3){
            if(a[j]<=i){
                ll p=b[i-a[j]];
                if(p!=INT_MAX && p+1<b[i])
                b[i]=p+1; 
            }
        }
    }
    cout<<b[n]<<"\n";
    
}