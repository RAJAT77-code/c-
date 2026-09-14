#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int a=1 , r=2;
for(int i=1; i<=n; i++)  // n times loop chalega
{
    cout<<a<<" ";
     a*=r;
}


}