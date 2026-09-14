#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int ans=1;
  for (int i=1;i<=b;i++)
  {  if(a==1) break;
    ans*=a;
  } if(a==0 && b==0) cout<<"undermined form";
  else
  cout<<ans;
}