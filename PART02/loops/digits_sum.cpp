#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
if(n<0) n*=-1;
 int sum=0;
 while(n!=0)
 { int last_digit = n%10;
     sum+=last_digit;
     n/=10;
 }
cout<<"sum of digits is: "<<sum<<" "<<endl;
}