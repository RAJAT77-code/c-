#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"enter num a: ";
cin>>a;
cout<<"enter num b: ";
cin>>b;
cout<<"enter num c: ";
cin>>c;

if(a<b and a<c) cout<<"a is smallest";
else if (b<a && b<c)
{
 cout<<"b is smallest";
}
 else if (c<a and c<b)
 {
    cout<<"c is smallest";
 }
  return 0;
}
