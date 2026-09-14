#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"eneter  number: ";
   cin>>n;

   if(n==1) cout<<"MONDAY";
   else if (n==2) cout<<"TUESDAY";
   else if (n==3) cout<<"WEDNESDAY";
else if (n==4) cout<<"THURSDAY";
else if (n==5) cout<<"FRIDAY";
else if (n==6) cout<<"SATURDAY";
else if (n==7) cout<<"SUNDAY";
else cout<<"invalid day";
}