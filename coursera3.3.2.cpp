#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
 long long int n,i,j,k,t1,t2,l,m;
 cout.precision(4);
 setprecision(4);
 double w,s=0.0000;
 cin>>n>>w;
 cout.precision(4);
 setprecision(4);
 double a[n],b[n];
 for(i=0;i<n;i++){
    cin>>a[i]>>b[i];
     cout.precision(4);
     setprecision(4);
 }
for(j=0;j<n-1;j++){
         cout.precision(4);
    for(k=0;k<n-1-j;k++){
        if((a[k]/b[k])<(a[k+1]/b[k+1])){
            t1=a[k];
            t2=b[k];
            a[k]=a[k+1];
            b[k]=b[k+1];
            a[k+1]=t1;
            b[k+1]=t2;
        }
    }
}
 for(l=0;l<n;l++){
      cout.precision(4);
        m=b[l];
        while(w>0&&m>0){
            s=s+(a[l]/b[l]);
           m--;
           w--;
        }
    }
    printf("%.4lf\n",s);

}

