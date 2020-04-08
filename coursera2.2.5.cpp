#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;
int main (){
long long int n,m,p=2,i,j,k;
cin>>n>>m;
long long int a[100001];
         a[0]=0;a[1]=1;
    for(i=2;i<=100000;i++){
        a[i]=(a[i-1]+a[i-2])%m;
    }
for(j=2;j<=100000;j++){
    if(a[j]==0&&a[j+1]==1){
        break;
    }
    else p++;
}
k=n%p;
cout<<a[k]%m;
}
