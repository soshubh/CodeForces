#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
unsigned long long int fact(unsigned long long int n)
{
  if(n>0)
   return n*fact(n-1);
  else
   return 1;
}
int main()
{
    unsigned long long int n;
    cin>>n;
    cout<<fact(n);
  return 0;
}
