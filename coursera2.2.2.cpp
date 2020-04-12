//Saurabhsahab
#include<bits/stdc++.h>
using namespace std ;
int main (){
long long int n,i,m;
 scanf("%lld %lld",&n,&m);
 if(n==0||n==1){
    printf("%lld",n);
 }
 else{ long long int a[n];
         a[0]=0;a[1]=1;
    for(i=2;i<=n;i++){
        a[i]=(a[i-1]+a[i-2])%m;
    }
     printf("%lld",a[n]);
 }

}
