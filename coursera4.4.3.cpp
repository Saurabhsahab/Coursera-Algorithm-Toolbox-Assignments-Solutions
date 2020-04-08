#include<bits/stdc++.h>
using namespace std ;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long int n,i;
cin>>n;
long long int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++){
cout<<a[i]<<" ";}
}
