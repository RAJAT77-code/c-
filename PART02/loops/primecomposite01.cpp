#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n; 
bool flag = false;

for(int i=2;i<=n-1;i++)
{  if (n%i==0) // agar factor mil gya then
    flag= true;    
    break;
}
if (flag==true) cout<<"Composite number";
else if(flag==false) cout<<"Prime number";
//else cout<<"neither prime nor composite ";
}