//Saurabhsahab
//#include <boost/math/common_factor.hpp> 
#include<bits/stdc++.h>
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define  V vector<ll>
#define M map 
#define UM unordered_map
#define MM multimap 
#define S set<ll>
#define US unordered_set<ll>
#define pb push_back
#define pob pop_back()
#define bg begin()
#define ed end()
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define AI(n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
using namespace std ;

using namespace std;
ll KS(ll W,V val,V wt,ll n) {
	
	vector<V> K(n + 1,V(W + 1));
	f(i,0,n+1) {
		f(w,0,W+1) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	ll n, C;
	cin >>C>>n;

	V Values(n);
	V Weights(n);
	ll Temp;
	for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		Values[i] = Weights[i] = Temp;
	}
	cout <<KS(C, Values, Weights, n) <<"\n";
}
