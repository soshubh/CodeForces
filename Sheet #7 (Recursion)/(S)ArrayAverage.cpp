#include <bits/stdc++.h>
using namespace std;
long long f(long long  a[],long long  n)
{
  if(n==-1)
   return 0;
  int sum=0;
  sum=sum+a[n];
  return sum+f(a,n-1);
}
int main(){
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<< fixed<<setprecision(6);
   cout<<(float)f(a,n-1)/n;
}
