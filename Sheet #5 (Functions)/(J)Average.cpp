#include <bits/stdc++.h>
using namespace std;
int f(int n,double a[])
{ double r=n,sum=0;
  while(n--)
   sum+=a[n];
 
  cout<<fixed<<setprecision(7)<<sum/r;
}
int main()
{
  int n;
  cin>>n;
  double a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  f(n,a);
}
