#include<iostream>
using namespace std;
int main(){

int i;
cout<<"enter a number: ";
cin>>i;
if(i<0) i*=-1;
int digits=0;
if(i==0) digits++;
while(i!=0)
{ i/=10;
digits++;

}
cout<<digits;
}