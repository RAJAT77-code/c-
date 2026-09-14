#include<iostream>
using namespace std;
int main(){
 int l;
 cout<<"Enter length: ";
 cin>>l;
 int b;
 cout<<"enter breadth: ";
 cin>>b;

 int area =l*b;
 cout<<area<<endl;

 if (area>l+b) cout<<"area is greater than perimeter";
 else cout<<"area is not greater than perimeter ";

}