#include<bits/stdc++.h>
using namespace std ;
int main (){
    long long int n,k,i,j,l,r,m,c;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    long long int b[k];
    for(i=0;i<k;i++){
        cin>>b[i];
    }
    for(j=0;j<k;j++){
        l=0;
        r=n-1;
        c=0;
        while(l<=r){
        m=(l+(r-l)/2);
        if(a[m]==b[j]){
            cout<<m<<" ";
            c++;
            break;
        }
        else{
            if(a[m]>b[j]){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }

        }
    if(c==0){
        cout<<-1<<" ";
    }
}
}
