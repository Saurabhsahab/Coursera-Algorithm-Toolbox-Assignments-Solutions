//Saurabhsahab
#include<bits/stdc++.h>
using namespace std ;
int main (){
long long int a,b,c,i,g,d;
scanf("%lld %lld",&a,&b);
if(a>b)
 {c=b;
 d=a;}
else
 {c=a;
 d=b;}
if(a==0||b==0){
printf("0");
}
else{
   if(a%b==0||b%a==0){
    printf("%lld\n",d);
}
else{
    for( i=1;i<=c;i++){
 if(a%i==0&&b%i==0)
  g=i;
else
 continue;}
printf("%lld\n",(a*b)/g);
}
}
}
