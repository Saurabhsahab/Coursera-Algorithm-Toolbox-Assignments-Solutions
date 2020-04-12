//Saurabhsahab
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std ;
int main(){
   long long int a,b,m,c,i,k;
    cin>>a>>b;
    if (a>b)
   {m=b;
    c=a;}
    else
   {
    m=a;
    c=b;}
 while(true){
i=c%m;
if (i==0)
  {

  cout<<m;
   break;}
else
{
    c=m;
m=i;
continue;
}
 }


}
