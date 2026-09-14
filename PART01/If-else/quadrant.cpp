#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"enter your  X coordinate: ";
cin>>x;
cout<<"enter your  Y coordinate: ";
cin>>y;

if(x>0 && y>0) cout<<"FIRST QUADRANT";
else if (x==0 && y==0) cout<<"AT ORIGIN";
else if(x>0 && y==0)  cout<<"X-AXIS";
else if(x==0 && y>0)  cout<<"Y-AXIS";
else if(x<0 && y>0)  cout<<"SECOND QUADRANT";
else if(x<0 && y<0)  cout<<"THIRD QUADRANT";
else if(x>0 && y<0)   cout<<"FOURTH QUADRANT";

}