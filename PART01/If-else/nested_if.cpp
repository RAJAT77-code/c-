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

if(a<=b)
{   if(b<=c) cout<<"c is greatest";
    else cout<<"b is greatest";  
}
if (a>=b)
{
    if(b>=c) cout<<"a is greatest";
    else  cout<<"c is greatest";
}

}
