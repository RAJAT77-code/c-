#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter your number: ";
cin>>n;

if (n%5 ==0 && n%3 ==0) cout<<"hitesh";
else if(n%5 ==0) cout<<"rajat";
else if (n%3 ==0) cout<<"kartik";
else if (n%5 !=0 && n%3 !=0) cout<<"karan";


}