#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter your number: ";
cin>>n;
int sum =0;
int rev=0;
while(n!=0)
{ int last =n%10;
   sum+=last;

   rev*=10;
   rev+=last;
   n/=10;
}
cout<<"sum of digits is: "<<sum<<endl;
cout<<"reverse of digits is: "<<rev<<endl;


}