#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
       scanf("%lld",&a[i]);
       fflush(stdin);
    }
    sort(a,a+n);
    printf("%lld",a[n-2]*a[n-1]);
}
