#include<bits/stdc++.h>
using namespace std ;
int main (){
long long int n,i,j,m=1;
cin>>n;
long long int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(j=1;j<n;j++){
if(a[j-1]==a[j]){
    m++;
    if(m>n/2){
        cout<<1;
        break;
    }
}
else m=1;
}
if(m<=n/2&&n>1){
    cout<<0;
}
if(m==1&&n==1){
    cout<<1;
}
}

