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

V optimal_sequence(int n) {
  V sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

V dynamic_sequence(ll n) {
  V a(n+1);
  V predecessor(n+1);

  f(i,2,n+1) {
    a[i] = a[i-1] + 1;
    predecessor[i] = i - 1;
    if (i % 3 == 0) {
      if (a[i/3] < a[i]) {
        a[i] = a[i/3] + 1;
        predecessor[i] = i/3;
      }
    }
    if (i % 2 == 0) {
      if (a[i/2] < a[i]) {
        a[i] = a[i/2] + 1;
        predecessor[i] = i/2;
      }
    }
  }

  V sequence;

  for (ll i = n; i !=0; i = predecessor[i]) {
    sequence.push_back(i);
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  ll n;
  cin >> n;
  V sequence = dynamic_sequence(n);
  cout << sequence.size() - 1 <<"\n";
  for (size_t i = 0; i < sequence.size(); ++i) {
    cout << sequence[i] << " ";
  }
}
