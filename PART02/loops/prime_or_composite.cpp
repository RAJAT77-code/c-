#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int count= 0;

for(int i=1;i<=n;i++)
{  if (n%i==0)
    count++;
}
cout<<count<<endl;
if(count>=3) cout<<"Composite Number";
else if (count==1) cout<<"Neither Prime nor Composite";
else cout<<"Prime Number";

}