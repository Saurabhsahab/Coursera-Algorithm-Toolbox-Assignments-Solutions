//Saurabhsahab
#include<bits/stdc++.h>
using namespace std;
int main(){
int m,c=0;
cin>>m;
while(m>=10){
    m=m-10;
    c++;
}
while(m>=5){
    m=m-5;
    c++;
}
while(m>=1){
    m=m-1;
    c++;
}
cout<<c<<endl;

 }
