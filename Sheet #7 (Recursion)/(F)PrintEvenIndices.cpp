#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
void p(int a[],int n)
{
  if(n==0)
   return;
  else if(n%2!=0) 
   cout<<a[n-1]<<" ";
  p(a,--n); 
}
int main()
{
  int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
  p(a,n);  
}
