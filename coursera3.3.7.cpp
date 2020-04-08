#include<bits/stdc++.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n],m,r,i,j,k,l,t,f;
for( i=0;i<n;i++){
    cin>>a[i];
}
for( j=0;j<n;j++){
    m=a[j];
    r=0;
    while(m>0){
        r++;
        m=m/10;
    }
    if(r==1){
        b[j]=(a[j]*1000)+(a[j]*100)+(a[j]*10)+a[j];
}
 if(r==2){
     b[j]=(a[j]*100)+a[j];
 }
 if(r==3){
     b[j]=(a[j]*1000)+a[j];
     b[j]=b[j]/100;
 }
}
   for(k=0;k<n-1;k++){
    for(l=0;l<n-1-k;l++){
        if(b[l]<b[l+1]){
            t=a[l];
            f=b[l];
            b[l]=b[l+1];
             a[l]=a[l+1];
            b[l+1]=f;
            a[l+1]=t;
        }
    }
   }
   for(int s=0;s<n;s++){
    cout<<a[s];
   }

}
