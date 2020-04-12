//Saurabhsahab
#include <bits/stdc++.h>
#define max 100000000
#define ll long long 
using namespace std;
vector<ll> fib;
void fibonacci(long long n){
	fib.push_back(0);
	fib.push_back(1);

	ll a;
	for (int i = 2; i < n+1; ++i)
	{
		a = (fib[i-1]%10) + (fib[i-2]);
		fib.push_back(a);
	}
}

int main(){
	long long n;
	cin>>n;
	fibonacci(n+1);
	long long f = fib[n];
	long long s = fib[n+1];
	cout<<(f*s)%10;
}
