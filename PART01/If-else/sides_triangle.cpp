#include<iostream>
using namespace std;
int main(){

int a;
cout<<"enter number a: ";
cin>>a;
int b;
cout<<"enter number b  : ";
cin>>b;

int c;
cout<<"enter number c: ";
cin>>c;

if((a+b)>c && (b+c)>a && (a+c)>b) cout<<"valid triangle";

else cout<<"invalid triangle";


}