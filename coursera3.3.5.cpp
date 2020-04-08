
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
long long int n,k=0,i,j,s,g,c=0,m=0;
cin>>n;
long long int a[n],b[n],h[n];
for(i=0;i<n;i++){
    cin>>a[i]>>b[i];
}

for(g=0;g<n;g++){
        k=0;
        if(a[g]==0&&b[g]==0){
            continue;
        }
else{
        s=(a[g]+b[g])/2;
for(j=0;j<n;j++){
    if(s>=a[j]&&s<=b[j])
    { a[j]=0;
      b[j]=0;
      k++;
      continue;
    }
}
if(k>0){
   c++;
h[m]=s;
m++;
}
}}
cout<<c<<endl;
for(int l=0;l<c;l++){
    cout<<h[l]<<" ";
}
}
