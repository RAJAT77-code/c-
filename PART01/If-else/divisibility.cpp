#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter number: ";
  cin>>n;

  if (n%5==0 && n%3==0)
  cout<<"IT IS DIVISIBLE BY BOTH";
  else cout<<"not divisible by both";

}