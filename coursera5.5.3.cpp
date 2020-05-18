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

ll ED(string str1, string str2, ll m, ll n) {
	vector<V> dp(m + 1, V(n + 1));

	f(i,0,m+1) {
		f(j,0,n+1) {
			if (i == 0)
				dp[i][j] = j;

			else if (j == 0)
				dp[i][j] = i;

			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			else
				dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
		}
	}

	return dp[m][n];
}
int main() {
	string First_String, Second_String;
	cin >> First_String >> Second_String;
	
	cout <<ED(First_String, Second_String, First_String.size(),Second_String.size())<<"\n";
}
