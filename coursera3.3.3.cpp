#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
 long long int d,m,n,i,c=0,j,g=0;
 cin>>d>>m>>n;
 long long int a[n+1];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 a[n]=d;
 for(j=0;j<n+1;j++){
    if(m+g<a[j]){
        if(a[j]-a[j-1]>m){
            break;
        }
        c++;
        g=a[j-1];
    }
 }
 if(m+g<a[n])
    cout<<-1<<endl;
    else
        cout<<c<<endl;

}


