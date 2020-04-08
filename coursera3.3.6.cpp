#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
    long long int n,i,s,k;
    cin>>n;
    for(i=1;i<100000;i++){
        if((i*(i+1))/2<=n){
            continue;
        }
        else {
            s=n-((i*(i-1))/2);
            break;
        }
    }
    cout<<i-1<<endl;
    for(k=1;k<i;k++){
        if(k==i-1){
            cout<<k+s<<" ";
        }
        else{
            cout<<k<<" ";
        }
    }
}
