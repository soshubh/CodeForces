#include <bits/stdc++.h>
using namespace std;
int mm(int a[],int n)
{ int max=a[0],min=a[0];
  while(n--)
  {
    if(max<a[n])
     max=a[n];
    if(min>a[n])
     min=a[n];
  }
  cout<<min<<" "<<max;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
 
  mm(a,n); 
}
