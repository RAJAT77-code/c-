#include<iostream>
using namespace std;
int main(){
 int CP ;
 cout<<"enter CP: ";
 cin>>CP;

 int SP;
 cout<<"enter SP: ";
 cin>>SP;
 if(CP<SP) 
  cout<<" MADE PROFIT OF:" <<SP-CP;
  else if(CP>SP) cout<<"made loss of: " <<CP-SP;
  else cout<<"zero profit and loss";



}
