#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter your number: ";
cin>>n;
long long fact=1;   // for bigger numbers
for(int i=1;i<=n;i++)
{
      fact*=i;
}
cout<<fact;

}