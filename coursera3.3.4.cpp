#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
long long int n,i,j;
cin>>n;
long long int a[n],b[n],s;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
for(j=0;j<n;j++){
   s=s+(a[j]*b[j]);
}
cout<<s<<endl;
}
